//Memoization - TOP DOWN DP.
class Solution{
public:
    int solveDP(int n, vector<int>&dp){
        if(n <= 1) return n;
        if(dp[n] != -1) return dp[n];
        else{
            return dp[n] = solveDP(n-1,dp) + solveDP(n-2,dp);
        }
    }
    int fib(int n){
        vector<int>dp(n+1,-1);
        return solveDP(n,dp);
    }
};

//Tabulation - Bottom Up DP.
class Solution {
public:
    int fib(int n) {
        if(n <= 1)return n;
        vector<int>dp(n+1,0);
        dp[0] = 0;
        dp[1] = 1;
        for(int i=2;i<=n;i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};

//Space Optimization solution.
class Solution {
public:
    int fib(int n) {
        if(n <= 1) return n;
        int prev2 = 0, prev = 1, curr;
        for(int i = 2;i<=n;i++){
            curr = prev + prev2;
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
};