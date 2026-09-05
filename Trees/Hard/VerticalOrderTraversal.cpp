class Solution{
public:
    void vertical(TreeNode* root, int x,int y,map<int,map<int,multiset<int>>>&nodes){
        if(root){
            nodes[x][y].insert(root->val);
            vertical(root->left,x-1,y+1,nodes);
            vertical(root->right,x+1,y+1,nodes);
        }
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>nodes;
        vector<vector<int>>ans;
        vertical(root,0,0,nodes);
        for(auto p:nodes){
            vector<int>col;
            for(auto q:p.second){
                col.insert(col.end(),q.second.begin(),q.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
}