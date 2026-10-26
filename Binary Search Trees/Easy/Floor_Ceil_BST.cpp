class Solution{	
	public:
		vector<int> floorCeilOfBST(TreeNode* root,int key){
		   int floor = -1,ceil = -1;
           while(root){
            if(key == root->data){
                return {key,key};
            }
            if(key > root->data){
                floor = root->data;
                root = root->right;
            }else{
                ceil = root->data;
                root = root->left;
            }
           }
        return {floor,ceil};
	}
};