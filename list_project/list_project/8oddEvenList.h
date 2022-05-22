#pragma once
#ifndef __8__
#define __8__

ListNode* oddEvenList(ListNode* head) {
    createList(head);
    if (head == nullptr) {
        return head;
    }
    ListNode* evenHead = head->next;
    ListNode* odd = head;
    ListNode* even = head->next;
    while (even != nullptr && even->next != nullptr) {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenHead;
    return head;
}

#endif // !__8__
