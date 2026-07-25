class Solution{
    public:
    bool check(vector<int>&nums,int k,int idx,int sum){
        if(sum == k) return true;
        if(sum > k || idx == nums.size())return false;
        if(check(nums,k,idx+1,sum+nums[idx]))return true;
        if(check(nums,k,idx+1,sum)) return true;
        return false;
    }
    bool checkSubsequenceSum(vector<int>& nums, int k) {
        return check(nums,k,0,0);
    }
};