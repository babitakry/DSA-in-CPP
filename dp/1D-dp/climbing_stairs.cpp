#include <vector>
using namespace std;


// Recursive [Give TLE]
class Solution {
    int recu(int n){
        if(n <= 1){
            return 1;
        }
        return recu(n-1) + recu(n-2);
    }
public:
    int climbStairs(int n) {
        return recu(n);
    }
};

// Memoization
class Solution {
    int recu(int n, vector<int> &dp){
        if(n <= 1){
            return 1;
        }
        if(dp[n] != -1){
            return dp[n];
        }

        return dp[n] = recu(n-1, dp) + recu(n-2, dp);
    }
public:
    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        return recu(n, dp);
    }
};


// Tabulation
class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        
        dp[0] = 1;
        dp[1] = 1;
        for(int i = 2; i <= n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }

        return dp[n];
    }
};