class Solution {
public:
    int height(TreeNode* node,int &diameter){
        if(!node)return 0;
        int LH = height(node->left,diameter);
        int RH = height(node->right,diameter);
        diameter = max(diameter,LH+RH);
        return 1+max(LH,RH);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        height(root,diameter);
        return diameter;
    }
};