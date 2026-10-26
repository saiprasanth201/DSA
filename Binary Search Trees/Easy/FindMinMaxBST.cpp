class Solution{
    public:
    pair<int, int> findMinMax(Node* root) {
        if (root == nullptr) return {-1, -1};
         
        Node* curr = root;
        while (curr->left != nullptr) {
            curr = curr->left;
        }
        int mini = curr->val;
    
        curr = root;
        while (curr->right != nullptr) {
            curr = curr->right;
        }
        int maxi = curr->val;
        return {mini, maxi};
    }
};