#pragma once
#ifndef __2__
#define __2__

ListNode* reverseList(ListNode* head) {
    /*ListNode* pre = nullptr;
    ListNode* cur = head;
    while (cur) {
        ListNode* temp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = temp;
    }
    return pre;*/

    //µÝ¹éÊµÏÖ
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    ListNode* p = reverseList(head->next);
    head->next->next = head;
    head->next = nullptr;
    return p;

}
#endif // !__2__

