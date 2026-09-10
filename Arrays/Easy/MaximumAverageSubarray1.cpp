class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0, n = nums.size();
        for(int i =0;i<k;i++) sum += nums[i];
        int maxi = sum;
        for(int i =k;i<n;i++){
            sum = sum - nums[i-k]+nums[i];
            maxi = max(maxi,sum);
        }
        return (double) maxi/k;
    }
};