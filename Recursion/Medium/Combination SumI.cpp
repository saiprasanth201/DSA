class Solution {
public:
    void combination(vector<int>& nums,vector<int>&temp,int idx,int target, vector<vector<int>>&ans){
        int n = nums.size();
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        if(idx == n || target < 0) return;

        temp.push_back(nums[idx]);
        combination(nums,temp,idx,target-nums[idx],ans);
        temp.pop_back();
        combination(nums,temp,idx+1,target,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        combination(nums,temp,0,target,ans);
        return ans;
    }
};