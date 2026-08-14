class Solution{
    public:
    void inorder(TreeNode*root, vector<int>&arr){
        if(root == nullptr) return;
        inorder(root->left,arr);
        arr.push_back(root->val);
        inorderorder(root->right,arr);
    }
    vector<int>inorderorderTraversal(TreeNode*root){
        vector<int>arr;
        inorder(root,arr);
        return arr;
    }
};