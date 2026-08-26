class Solution{
public:
    int dfsHeight(TreeNode*root){
        return dfsHeight(root) != -1;
    }
    int BalancedBST(TreeNode*root){
        if(root == nullptr) return 0;
        int LH = dfsHeight(root->left);
        int RH = dfsHeight(root->right);
        if(abs(LH-RH)>1 || LH == -1 || RH == -1)return -1;
        return 1+max(LH,RH);
    }
}