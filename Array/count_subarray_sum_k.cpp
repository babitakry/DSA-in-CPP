//Count subarrays with given sum
#include <unordered_map>
#include <vector>
using namespace std;

class Solution{
public:
    int subarraySum(vector<int> &nums, int k){
        int n = nums.size();
        unordered_map<int,int> mpp;

        mpp[0] = 1; // initially
        int sum = 0;
        int cnt = 0;

        for(int i = 0; i < n; i++){
            sum += nums[i];
            int rem = sum - k;
            if(mpp.find(rem) != mpp.end()){
                cnt += mpp[rem];
            }
            mpp[sum]++ ;
        }
        return cnt;
    }
};