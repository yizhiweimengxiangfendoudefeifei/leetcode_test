#pragma once
#ifndef  __6__
#define __6__

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* root = new ListNode(0);
    ListNode* cursor = root;
    int carry = 0;
    while (l1 || l2 || carry != 0) {

        int l1Val = l1 != nullptr ? l1->val : 0;
        int l2Val = l2 != nullptr ? l2->val : 0;
        int sumVal = l1Val + l2Val + carry;
        carry = sumVal / 10;

        ListNode* node = new ListNode(sumVal % 10);
        cursor->next = node;
        cursor = node;

        if (l1 != nullptr) {
            l1 = l1->next;
        }
        if (l2 != nullptr) {
            l2 = l2->next;
        }
    }
    return root->next;
}
#endif // ! __6__
