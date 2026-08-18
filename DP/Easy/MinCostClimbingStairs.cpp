class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        for(int i=2;i<n;i++){
            cost[i]+=min(cost[i-1],cost[i-2]);
        }
        return min(cost[n-1],cost[n-2]);
    }
};

//M2 : Space optimization
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int prev1 =0,prev2=0,ans = prev2;
        for(int i=2;i<=n;i++){
            ans = min(prev2+cost[i-1],prev1+cost[i-2]);
            prev1 = prev2;
            prev2 = ans;
        }
        return ans;
    }
};

//M3 : Memoization
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n);
        
        for (int i = 0; i < n; i++) {
            if (i < 2) dp[i] = cost[i];
            else dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);  
        }
        return min(dp[n - 1], dp[n - 2]);
    }
};
