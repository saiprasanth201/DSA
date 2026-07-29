class Solution {
public:
    void combo(vector<int>&nums, vector<int>&temp, int idx,int target,vector<vector<int>>&ans){
        int n = nums.size();
        if(target ==0){
            ans.push_back(temp);
            return;
        }
        for(int i = idx;i<n;i++){
            if(i > idx && nums[i] == nums[i-1]) continue;
            if(nums[idx] > target) break;
            temp.push_back(nums[i]);
            combo(nums,temp,i+1,target - nums[i],ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>temp;
        combo(nums,temp,0,target,ans);
        return ans;
    }
};