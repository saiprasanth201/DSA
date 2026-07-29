class Solution {
public:
    void power(vector<int>&nums,vector<int>&temp,int n,int idx,vector<vector<int>>&ans){
        if(idx == n){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[idx]);
        power(nums,temp,n,idx+1,ans);
        temp.pop_back();
        power(nums,temp,n,idx+1,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        vector<int> temp;
        power(nums,temp,n,0,ans);
        return ans;
    }
};