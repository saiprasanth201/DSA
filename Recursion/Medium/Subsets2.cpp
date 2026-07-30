class Solution {
public:
    void power(vector<int>&nums,vector<int>&temp,int idx,int n,vector<vector<int>>&ans){
           ans.push_back(temp);
        for(int i = idx;i<nums.size();i++){
            if(i > idx && nums[i] == nums[i-1]){
                continue;
            }
            temp.push_back(nums[i]);
            power(nums,temp,i+1,n,ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>temp;
        power(nums,temp,0,n,ans);
        return ans;
    }
};