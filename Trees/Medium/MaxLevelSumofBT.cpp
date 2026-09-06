class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode*>q;
        q.push(root);

        int maxSum = INT_MIN;
        int maxLvl = 1;
        int currLvl = 1;

        while(!q.empty()){
            int size = q.size();
            int currSum = 0;

            for(int i =0;i<size;i++){
                TreeNode*node = q.front();
                q.pop();

                currSum += node->val;

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);

            }

            if(currSum > maxSum){
                maxSum = currSum;
                maxLvl = currLvl;
            }
            currLvl++;
        }
        return maxLvl;
    }
};