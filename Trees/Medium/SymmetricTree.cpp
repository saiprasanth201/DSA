class Solution {
public:
    bool isSym(TreeNode*n1,TreeNode*n2){
        if(n1==nullptr && n2==nullptr)return true;
        if(n1==nullptr || n2==nullptr)return false;
        return n1->data == n2->data && isSym(n1->left,n2->right) && isSym(n1->right,n2->left);
    }
    bool isSymmetric(TreeNode* root) {
        return isSym(root->left,root->right);
    }
};