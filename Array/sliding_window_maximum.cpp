#include<vector>
#include<algorithm>
#include <climits>
using namespace std;


// Brute Force Time: O(n*k)
class Solution {
    int findMaxi(vector<int> &nums, int l, int r){
        int n = nums.size();
        int maxi = INT_MIN;

        for(int i = l; i <= r; i++){
            maxi = max(maxi, nums[i]);
        }
        return maxi;
    }
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        int r = k-1;

        vector<int> ans;
        while(r < n){
            int maxi = findMaxi(nums,l , r);
            ans.push_back(maxi);
            l++;
            r++;
        }   

        return ans;
    }
};