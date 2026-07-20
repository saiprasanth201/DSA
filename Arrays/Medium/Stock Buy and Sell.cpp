class Solution{
public:
    int stockBuySell(vector<int> arr, int n){
        n = arr.size();
        int best_buy= arr[0];
        int max_profit = 0;

        for(int i = 0;i<n;i++){
            best_buy= min(best_buy,arr[i]);
            max_profit= max(max_profit,arr[i]-best_buy);
        }
        return max_profit;
    }
};

/*Problem #33: Best Time to Buy and Sell Stock

Optimal: O(N)
- initialize best_buy = prices[0]
- initialize max_profit = 0
- run for loop
- update best_buy using minimum price seen so far
- calculate profit = prices[i] - best_buy
- update max_profit
- return max_profit

Memory Trigger:
Keep track of cheapest buying price so far.
For every day, check profit if sold today.*/