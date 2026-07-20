class Solution {
public:
    void deleteNode(ListNode* node) {
        *node = *node->next;
    }
};

/*node*Deletehead(node*head){
    if(head == NULL) return head;
    node*temp = head;
    head = head->next;
    delete(temp);
    return head;
}

head = Deletehead(head); 
cout << head->data << endl;*/