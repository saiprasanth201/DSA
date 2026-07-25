class Solution {
public:
    void power(vector<int> & ds,int idx, int n, vector<vector<int>>&ans,vector<int>& nums){
        if(idx == n){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[idx]);
        power(ds,idx+1,n,ans,nums);
        ds.pop_back();
        power(ds,idx+1,n,ans,nums);
    }
    vector<vector<int> > powerSet(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        vector<int> ds;
        power(ds,0,n,ans,nums);
        return ans;
    }
};