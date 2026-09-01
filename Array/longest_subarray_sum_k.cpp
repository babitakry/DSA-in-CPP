//Longest subarray with sum K

#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
   public:
    int longestSubarray(vector<int> &nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mpp;

        int sum = 0;
        int maxLen = 0;
        for(int i = 0; i < n; i++){
            sum += nums[i];

            if(sum == k){
                maxLen = max(maxLen, i+1);
            }
            int req = sum - k;
            if(mpp.find(req) != mpp.end()){
                int len = i - mpp[req];
                maxLen = max(maxLen, len);
            }
            if(mpp.find(sum) == mpp.end()){
                mpp[sum] = i;
            } 
        }
        return maxLen;
    }
};
