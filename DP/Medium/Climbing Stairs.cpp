//Memoization
class Solution {
public:
    int solveDP(int n, vector<int>&dp){
        if(n==1 || n==0)return 1;
        if(dp[n] != -1) return dp[n];
        else{
            return dp[n] = solveDP(n-1,dp) + solveDP(n-2,dp); 
        }
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return solveDP(n,dp);
    }
};


//Tabulation.
class Solution {
public:
    int climbStairs(int n) {
        if(n <= 1) return n;
        vector<int>dp(n+1,0);
        dp[0] = 1;
        dp[1] = 1;
        for(int i = 2;i<=n;i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};

//Space optimization.
class Solution {
public:
    int climbStairs(int n) {
        if(n <= 1) return n;
        int prev2 = 1,prev = 1,curr;
        for(int i = 2;i<=n;i++){
            curr = prev2 + prev;
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
};