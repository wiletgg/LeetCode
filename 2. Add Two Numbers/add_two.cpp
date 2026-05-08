class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* tar = new ListNode(0), *curr = tar;
        ListNode* tail = tar;
        int carry = 0;
        while (l1 != NULL || l2 != NULL || carry){
        int tar1 = (l1 != NULL) ? l1->val : 0;
        int tar2 = (l2 != NULL) ? l2->val : 0;
            int sum = tar1 + tar2 + carry;
            carry = sum / 10;
        tail->next = new ListNode(sum % 10);
        tail = tail->next;
        if (l1 != NULL) l1 = l1->next;
        if (l2 != NULL) l2 = l2->next;
        }
        return tar->next;
    }
};
