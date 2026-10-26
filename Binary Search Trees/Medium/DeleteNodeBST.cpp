class Solution {
    public:
        TreeNode* deleteNode(TreeNode* root, int key) {
            if (root == nullptr) return root;
            if (key > root->val) root->right = deleteNode(root->right, key);
            else if (key < root->val) root->left = deleteNode(root->left, key);
            else {
                if (root->right == nullptr) return root->left;
                else if (root->left == nullptr) return root->right;
                else {
                    TreeNode* successor = root->right;
                    while(successor->left){
                        successor = successor->left;
                    }
                    root->val = successor->val;
                    root->right = deleteNode(root->right, successor->val);
                }
            }
            return root;
        }
    };