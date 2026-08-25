//M1:
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr) return nullptr;
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        invertTree(root->left);
        invertTree(root->right);
        
        return root;    
    }
};

//M2:
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr) return nullptr;
        swap(root->left,root->right);
        invertTree(root->left);
        invertTree(root->right);
        return root;    
    }
};