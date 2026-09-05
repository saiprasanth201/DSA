class Solution{
public:
    void dfs(TreeNode* root,vector<int>&ans,int lvl){
        if(root == nullptr) return;
        if(ans.size()==lvl) ans.push_back(root->val);
        dfs(root->right,ans,lvl+1);
        dfs(root->left,ans,lvl+1);
    }
    vector<int> rightSideView(TreeNode* root){
        vector<int> ans;
        dfs(root,ans,0);
        return ans;
    }
};