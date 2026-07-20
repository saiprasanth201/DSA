class Solution {
    public:
        ListNode* addTwoNumbers(ListNode* &linkedList1, ListNode* &linkedList2) {
            ListNode* dummy = new ListNode(0);
            ListNode* temp = dummy;
            int carry = 0;

            while(linkedList1 != NULL||linkedList2 != NULL||carry){
                int sum = 0;
                if(linkedList1 != NULL){
                    sum+=linkedList1->data; linkedList1 = linkedList1->next;
                }
                if(linkedList2 != nullptr){
                    sum+= linkedList2->data; linkedList2= linkedList2->next;
                }
                sum+= carry;
                carry = sum/10;
                ListNode* node = new ListNode(sum%10);
                temp ->next = node;
                temp = temp-> next;
            }
        return dummy->next;
    }
};