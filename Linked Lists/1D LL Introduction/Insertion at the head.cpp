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
node* convertarr2ll(vector<int>arr){
    node*head = new node(arr[0]);
    node*mover = head;
    for(int i =1;i<arr.size();i++){
        node*temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int main(){
    vector<int> arr = {15,2,3,4,5};
    node* head = convertarr2ll(arr);
    node* temp = head;
    while(temp){
    cout << temp->data <<endl;
    temp = temp->next;
    }
    cout << head->data <<endl;
    
}