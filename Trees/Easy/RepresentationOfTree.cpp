struct Node{
    int data;
    Node left;
    Node right;

    public Node(int key){
        data = key;
        left = right = nullptr;
    }
};

class Solution{
    public:
    int createBinaryTree(){
        Node root = new Node(1);
        root->left = new Node(2);
        root->right = new Node(3);
        root->left->right = new Node(4);
        return root;
    }
}