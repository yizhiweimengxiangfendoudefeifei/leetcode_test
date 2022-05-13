#pragma once
#ifndef __1__
#define __1__

//线性表的单链表的存储结构
struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

//typedef struct ListNode* linkList;
void createList(ListNode* l, int n) {
    ListNode* p, r;
    int i = 0;


}
ListNode* deleteDuplicates(ListNode* head) {
    ListNode* dummy = new ListNode(0, head);

    ListNode* cur = dummy;
    while (cur->next && cur->next->next) {
        if (cur->next->val == cur->next->next->val) {
            int x = cur->next->val;
            while (cur->next && cur->next->val == x) {
                ListNode* q = cur->next;
                cur->next = q->next;
                delete q;
            }

        }
        else {
            cur = cur->next;
        }
    }



    return dummy->next;
}

#endif // !__1__
