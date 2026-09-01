class Solution{
public:
    int MaxPathDown(TreeNode* node, int&maxi){
        if(node == nullptr) return 0;
        int left = max(0,MaxPathDown(node->left,maxi)); 
        int right = max(0,MaxPathDown(node->right,maxi)); 
        maxi = max(maxi,left+right+node->val);
        return max(left,right)+node->val;
    }
    int maxPathSum(TreeNode* root){
        int maxi = INT_MIN;
        MaxPathDown(root,maxi);
        return maxi;
    }
};