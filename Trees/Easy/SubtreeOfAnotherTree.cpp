class Solution {
    public:
        bool isSame(TreeNode*p,TreeNode*q){
            if(p == NULL || q == NULL) return p==q;
            return p->val == q->val && isSame(p->left,q->left) && isSame(p->right,q->right);
        }
        bool isSubtree(TreeNode* root, TreeNode* subRoot) {
            if(root == nullptr||subRoot == nullptr)return root == subRoot;
            if(root->val == subRoot->val && isSame(root,subRoot)) return true;
            return isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot);
        }
    };