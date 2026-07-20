int searchLL(node*head, int val){ // search in linked list.
    node*temp = head;
    while(temp){
        if(temp->data == val) 
        return 1;
        temp = temp->next;
    }
    return 0;
}