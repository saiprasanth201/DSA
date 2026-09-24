// LC Version 1:
class Solution {
    public:
        void inorder(TreeNode*root,vector<int>&ans){
            if(!root)return;
            inorder(root->left,ans);
            ans.push_back(root->val);
            inorder(root->right,ans);
        }
        int kthSmallest(TreeNode* root, int k) {
            vector<int>ans;
            inorder(root,ans);
            return ans[k-1];
        }
    };

// TUF Version 2 :
class Solution {
    public:
        void inorder(TreeNode*root,vector<int>&ans){
            if(!root)return;
            inorder(root->left,ans);
            ans.push_back(root->data);
            inorder(root->right,ans);
        }
        vector<int> kLargesSmall(TreeNode* root, int k) {
            vector<int>ans;
            inorder(root,ans);
            int n = ans.size();
            return {ans[k-1],ans[n-k]};
        }
    };
    