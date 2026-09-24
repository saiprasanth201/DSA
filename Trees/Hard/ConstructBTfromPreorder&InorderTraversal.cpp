//Linear Search Version:
class Solution {
    public:
        int search(vector<int>& inorder,int left,int right,int val){
            for(int i = left;i<=right;i++){
                if(inorder[i] == val) return i;
            }
            return -1;
        }
        TreeNode* helper(vector<int>& preorder, vector<int>& inorder,int&preidx,int left,int right){
            if(left>right) return nullptr;
            TreeNode * root = new TreeNode(preorder[preidx]);
            int inidx = search(inorder,left,right,preorder[preidx]); preidx++;
            root->left = helper(preorder,inorder,preidx,left,inidx-1);
            root->right = helper(preorder,inorder,preidx,inidx+1,right);
            return root;
        }
        TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
           int preidx = 0;
           return helper(preorder,inorder,preidx,0,inorder.size()-1); 
        }
    };

// Unordered map version
class Solution {
    public:
        TreeNode* helper(vector<int>& preorder, vector<int>&inorder,unordered_map<int,int>&inmap,int & preidx, int left, int right){
            if(left>right) return nullptr;
            TreeNode* root = new TreeNode(preorder[preidx]);
            int inidx = inmap[preorder[preidx]];preidx++;
            root->left = helper(preorder,inorder,inmap,preidx,left,inidx-1);
            root->right = helper(preorder,inorder,inmap,preidx,inidx+1,right);
            return root;
        }
        TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
            unordered_map<int,int>inmap;
            for(int i=0;i<inorder.size();i++)inmap[inorder[i]] = i;
            int preidx = 0;
            return helper(preorder,inorder,inmap,preidx,0,inorder.size()-1);
        }
    };