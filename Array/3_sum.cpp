#include<vector>
#include<algorithm>
using namespace std;

// Optimal Approach Time: O(nlogn + n^2) = O(n^2) Space: O(1)

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();

        vector<vector<int>> ans;
        sort(nums.begin(), nums.end()); //O(n log n)
        for(int i = 0; i < n; i++){ // O(n^2)
            if(i > 0 && nums[i] == nums[i-1])
                continue;
            
            int j = i+1;
            int k = n-1;
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
            
            if(sum < 0){
                j++;
            }
            else if(sum > 0){
                k--;
            }
            else{
                vector<int> temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j < k && nums[j] == nums[j-1]){
                    j++;
                }
                while(j < k && nums[k] == nums[k+1]){
                    k--;
                }
            }
            }
        }
        return ans;
    }
};


// Better Approach (Using Hashing) Time: O(n^2)

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n = nums.size();

//         set<vector<int>> tripletSet;
//         for(int i = 0; i < n; i++){
//             unordered_set<int> s;
//             for(int j = i+1; j < n; j++){
//                 int sum = nums[i] + nums[j];
//                 int third = -sum;

//                 if(s.find(third) != s.end()){
//                     vector<int> temp = {nums[i], nums[j], third};
//                     sort(temp.begin(), temp.end());
//                     tripletSet.insert(temp);
//                 }
//                 s.insert(nums[j]);
//             }
//         }

//         vector<vector<int>> ans(tripletSet.begin(), tripletSet.end());
//         return ans;
//     }
// };


// Brute force

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         sort(nums.begin(), nums.end()); //n log n
//         int n = nums.size();
//         set<vector<int>> st; // 

//         for (int i = 0; i < n; i++) {
//             for (int j = i+1; j < n; j++) {
//                 for (int k = j+1; k < n; k++) {
//                     if (i != j && j != k && i != k) {
//                         int sum = nums[i] + nums[j] + nums[k];
//                         if (sum == 0) {
//                             st.insert({nums[i], nums[j], nums[k]});
//                         }
//                     }
//                 }
//             }
//         }

//         vector<vector<int>> ans;

//         for(auto it: st){
//             ans.push_back(it);
//         }

//         return ans;
//     }
// };
