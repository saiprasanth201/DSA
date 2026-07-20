// All 5 operations -> Insert head LL, Traverse LL,  Length LL, search LL, Delete Head LL.

#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;

    public:
    node(int data1){
        data = data1;
        next = nullptr;
    }
};
node* convertarr2ll(vector<int>arr){ // insert head of linked list
    node*head = new node(arr[0]);
    node*mover = head;
    for(int i =1;i<arr.size();i++){
        node*temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
void traversalofLL(node*head){//traversal of linked list;
    node*temp = head;
    while(temp){
        cout<< temp->data<<endl;
        temp = temp->next;
    }
    cout << endl;
}
int lengthofLL(node*head){ // length of linked list.
    int cnt =0;
    node* temp = head;
    while(temp){
    temp = temp->next;
    cnt++;
    }
    return cnt;
}
int searchLL(node*head, int val){ // search in linked list.
    node*temp = head;
    while(temp){
        if(temp->data == val) 
        return 1;
        temp = temp->next;
    }
    return 0;
}
node*Deletehead(node*head){    // Deletes Head of linked list.
    if(head == NULL) return head;
    node*temp = head;
    head = head->next;
    delete(temp);
    return head;
}
int main(){ 
    vector<int>arr = {15,2,3,4,5};
    node* head = convertarr2ll(arr);
    node* temp = head;
    
    // head = Deletehead(head); cout << (head->data)<<endl;
    
    // cout << head->data <<endl;
    
    // traversalofLL(head);
    
    // cout << lengthofLL(head)<<endl;
    
    // cout << searchLL(head,5)<<endl;

}