//Boundary Traversal
class Solution{
public:
    bool isLeaf(TreeNode* node){
        return(!node->left && !node->right);
    }
    void addleftB(TreeNode* root, vector<int>&ans){
        TreeNode* curr = root->left;
        while(curr){
            if(!isLeaf(curr)) ans.push_back(curr->val);
            if(curr->left) curr = curr->left;
            else curr = curr->right;
        }
    }
    void addrightB(TreeNode* root, vector<int>&ans){
        TreeNode* curr = root->right;
        vector<int>temp;
        while(curr){
            if(!isLeaf(curr))temp.push_back(curr->val);
            if(curr->right) curr = curr->right;
            else curr = curr->left;
        }
        for(int i = temp.size() - 1; i >= 0 ; i--){
            ans.push_back(temp[i]);
        }
    }
    void addleaf(TreeNode* root, vector<int>&ans){
        if(isLeaf(root)){
        ans.push_back(root->val);
        return;
    }
    if(root->left) addleaf(root->left,ans);
    if(root->right) addleaf(root->right,ans);
}
    vector<int>BoundaryTraversal(TreeNode* root){
        vector<int>ans;
        if(!root) return ans;
        if(!isLeaf(root)) ans.push_back(root->val);
        addleftB(root,ans);
        addleaf(root,ans);
        addrightB(root,ans);
        return ans;
    }
};