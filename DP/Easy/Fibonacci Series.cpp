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