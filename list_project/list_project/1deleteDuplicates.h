#pragma once
#ifndef __1__
#define __1__

using namespace std;

//线性表的单链表的存储结构
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
    
};

//typedef struct ListNode* linkList;
void createList(ListNode* &L) {
    ListNode* p,*r;
    L = new ListNode(0);
    r = L;
    
    while (1) {
        int num = 0;
        cin >> num;
        if (num == 10) {
            break;
        }
        p = new ListNode(num);
        r->next = p;
        r = p;
        
    }
    r->next = nullptr;
    L = L->next;
}
ListNode* deleteDuplicates(ListNode* head) {
    createList(head);
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
