#pragma once
#ifndef __5__
#define __5__
#include<unordered_set>
unordered_set<ListNode*> seen;
bool hasCycle(ListNode* head) {
    createList(head);
    //¹þÏ£±í
    /*while (head) {
        if (seen.count(head)) {
            return true;
        }
        seen.insert(head);
        head = head->next;
    }
    return false;*/

    // ¿ìÂýÖ¸Õë
    if (head == nullptr || head->next == nullptr) {
        return false;
    }
    ListNode* slow = head;
    ListNode* fast = head->next;
    while (slow != fast) {
        if (fast == nullptr || fast->next == nullptr) {
            return false;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    return true;

}
#endif // !__5__
