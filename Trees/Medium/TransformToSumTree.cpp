class Solution {
public:
    TreeNode* sumTree(TreeNode* root){
        if(root == nullptr) return 0;
        int LSum = sumTree(root->left);
        int RSum = sumTree(root->right);
        root->val += LSum+RSum;
        return root->val;
    }
    TreeNode* TransformSumTree(TreeNode* root) {
        return sumTree(root);
    }
};