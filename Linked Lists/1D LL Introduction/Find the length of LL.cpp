int lengthofLL(node*head){
    int cnt =0;
    node* temp = head;
    while(temp){
    temp = temp->next;
    cnt++;
    }
    return cnt;  
}