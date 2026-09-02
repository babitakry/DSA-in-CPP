#include<vector>
#include<algorithm>
using namespace std;

// Optimal Approach Time: O(nlogn)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> arr;

        for(int i = 0; i < n; i++){
            arr.push_back({nums[i], i});
        }
        sort(arr.begin(), arr.end());

        int left = 0;
        int right = n-1;

        while(left < right){
            int sum = arr[left].first + arr[right].first;
            if(sum == target){
                return {arr[left].second, arr[right].second};
            }
            else if(sum > target){
                right--;
            }
            else{
                left++;
            }
        }
        return {-1, -1};
    }
};


// Better Approach
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n = nums.size();
//         unordered_map<int, int> mpp;

//         for(int i = 0; i < n; i++){
//             int needed = target - nums[i];
//             if(mpp.find(needed) != mpp.end()){
//                 return {mpp[needed], i};
//             }
//             mpp[nums[i]] = i;
//         }
        
//         return {-1, -1};
//     }
// };

// // Brute Force
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n = nums.size();
        
//         vector<int> ans;
//         for(int i = 0; i < n; i++){
//             for(int j = i+1; j < n; j++){
//                 if(nums[i] + nums[j] == target){
//                     ans = {i, j};
//                     break;
//                 }
//             }
//         }
//         return ans;
//     }
// };