class Solution {
public:

    ListNode* reverse(ListNode*curr,ListNode*end){
        ListNode* prev = NULL;
        ListNode* next = NULL;

        while(curr!=end){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
      if(head == NULL) return NULL;
      ListNode* temp = head;
      for(int i =0;i<k;i++){
        if(temp == nullptr) return head;
        temp = temp->next;
      }
      ListNode* newHead = reverse(head,temp);
      head ->next = reverseKGroup(temp,k);
      return newHead;
    }
};