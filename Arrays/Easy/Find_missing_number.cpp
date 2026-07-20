class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missing,actual=0;
        int sum =0;
        int n = nums.size();
        sum = n*(n+1)/2;

        for(int i = 0; i < n; i++){
            actual += nums[i];
        }
        missing = sum-actual;
        return missing;
    }
};