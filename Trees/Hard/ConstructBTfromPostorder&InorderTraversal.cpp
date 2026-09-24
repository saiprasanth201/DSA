class Solution {
    public:
        TreeNode*helper(vector<int>& inorder, vector<int>& postorder,unordered_map<int, int>& inmap,int& postidx,int left,int right){
            if(left>right) return nullptr;
            TreeNode* root = new TreeNode(postorder[postidx]);
            int inidx = inmap[postorder[postidx]];postidx--;
            root->right = helper(inorder,postorder, inmap,postidx,inidx+1,right);
            root->left = helper(inorder,postorder, inmap,postidx,left,inidx-1);
            return root;
        }
        TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
            unordered_map<int,int>inmap;
            for(int i=0;i<inorder.size();i++) inmap[inorder[i]] = i;
            int postidx = postorder.size()-1;
            return helper(inorder,postorder,inmap,postidx,0,inorder.size()-1);
        }
    };