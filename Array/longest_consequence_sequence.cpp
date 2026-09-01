//Longest Consecutive Sequence in an Array

#include<vector>
#include <unordered_set>
using namespace std;    

class Solution {
    bool LinearSearch(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                return true;
            }
        }
        return false;
    }

   public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;
        
        for(int i = 0; i < n; i++){
            s.insert(nums[i]);
        }

        int longest = 1;
        for(auto it: s){
            int x = it;
            int cnt = 1;
            if(s.find(x-1) == s.end()){
                while(s.find(x+1) != s.end()){
                    x = x+1;
                    cnt += 1;
                }
                longest = max(longest, cnt);
            }
        }
        return longest;
    }
};