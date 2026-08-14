class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == nullptr) return 0;
        int LH = maxDepth(root->left);
        int RH = maxDepth(root->right);
        return 1 + max(LH,RH); 
    }
};