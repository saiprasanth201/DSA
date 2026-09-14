class Solution {
    public:
        bool checkTree(TreeNode* root) {
            int root_val = root->val;
            int left_val = root->left->val;
            int right_val = root->right->val;
            return root_val == (left_val+right_val);
        }
    };