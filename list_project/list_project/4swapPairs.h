#pragma once
#ifndef __4__
#define __4__

ListNode* reversePairs(ListNode* a, ListNode* b) {
    ListNode* pre = nullptr;
    ListNode* cur = a;
    while (cur != b) {
        ListNode* temp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = temp;
    }
    return pre;
}
ListNode* swapPairs(ListNode* head) {
    
    if (head == nullptr) {
        return nullptr;
    }
    ListNode* a = head;
    ListNode* b = head;
    for (int i = 0; i < 2; ++i) {
        if (b == nullptr) {
            return head;
        }
        b = b->next;
    }
    ListNode* nowHead = reversePairs(a, b);

    a->next = swapPairs(b);
    return nowHead;
}
#endif // !__4__
