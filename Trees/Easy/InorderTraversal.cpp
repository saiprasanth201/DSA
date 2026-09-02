class Solution{
    public:
    void inorder(TreeNode*root, vector<int>&arr){
        if(root == nullptr) return;
        inorder(root->left,arr);
        arr.push_back(root->val);
        inorderorder(root->right,arr);
    }
    vector<int>inorderorderTraversal(TreeNode*root){
        vector<int>arr;
        inorder(root,arr);
        return arr;
    }
};

//Iterative
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        TreeNode* node = root;
        vector<int> inorder;
        while(true){
            if(node != NULL){
                st.push(node);
                node = node->left;
            }else{
                if(st.empty()==true) break;
                node = st.top();
                st.pop();
                inorder.push_back(node->val);
                node = node -> right;
            }
        }
        return inorder;
    }
};