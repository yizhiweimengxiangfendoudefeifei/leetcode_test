#pragma once
#ifndef __7__
#define __7__

ListNode* rotateRight(ListNode* head, int k) {
    createList(head);
    if (head == nullptr || head->next == nullptr || k == 0) {
        return head;
    }

    ListNode* cur = head;
    int count = 1;
    //计算总的节点数
    while (cur->next) {
        ++count;
        cur = cur->next;
    }

    k %= count;
    if (k == 0) {
        return head;
    }
    //如何将最后一个指针指向开头
    cur->next = head;
    //找到新的开始节点的上一个节点
    for (int i = 0; i < count - k; i++) {
        cur = cur->next;
    }
    //找到新的开始节点
    ListNode* newHead = cur->next;
    cur->next = nullptr;
    return newHead;

}
#endif // !__7__
