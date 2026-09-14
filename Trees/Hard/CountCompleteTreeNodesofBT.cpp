class Solution {
    public:
        int findHleft(TreeNode* node){
            int h = 0;
            while(node){
                h++;
                node = node->left;
            }
            return h;
        }
     int findHright(TreeNode* node){
            int h = 0;
            while(node){
                h++;
                node = node->right;
            }
            return h;
        }
        int countNodes(TreeNode* root) {
         if(!root)return 0;
         int lh = findHleft(root);
         int rh = findHright(root);
         if(lh==rh) return (1<<lh)-1;
         return (countNodes(root->left)+countNodes(root->right)+1);
        }
    };