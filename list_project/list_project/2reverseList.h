#pragma once
#ifndef __2__
#define __2__

ListNode* reverseList(ListNode* head) {
    ListNode* pre = nullptr;
    ListNode* cur = head;
    while (cur) {
        ListNode* temp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = temp;
    }
    return pre;

}
#endif // !__2__

