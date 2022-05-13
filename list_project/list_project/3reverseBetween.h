#pragma once
#ifndef __3__
#define __3__


ListNode* reverseBetween(ListNode* head, int left, int right) {
    ListNode* dummy = new ListNode(-1);
    dummy->next = head;
    ListNode* cur = dummy;

    for (int i = 0; i < left - 1; ++i) {
        cur = cur->next;
    }
    ListNode* pre = cur;

    for (int i = 0; i < right - left + 1; ++i) {
        cur = cur->next;
    }
    ListNode* rightNode = cur;

    ListNode* leftNode = pre->next;
    ListNode* next = rightNode->next;

    //¶Ï¿ªÁ¬½Ó
    pre->next = nullptr;
    rightNode->next = nullptr;

    reverseList(leftNode);

    pre->next = rightNode;
    leftNode->next = next;

    return dummy->next;
}
#endif // !__3__
