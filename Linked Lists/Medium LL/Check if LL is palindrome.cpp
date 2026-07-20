class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast&&fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* prev = nullptr;
        ListNode* curr = slow;
        ListNode* next = nullptr;

        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        ListNode* left = head;
        ListNode* right = prev;

        while(right){
            if(left->val != right->val) return false;
            right = right->next;
            left  = left->next;
        }
        return true;
    }
};