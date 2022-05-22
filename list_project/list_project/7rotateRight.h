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
    //�����ܵĽڵ���
    while (cur->next) {
        ++count;
        cur = cur->next;
    }

    k %= count;
    if (k == 0) {
        return head;
    }
    //��ν����һ��ָ��ָ��ͷ
    cur->next = head;
    //�ҵ��µĿ�ʼ�ڵ����һ���ڵ�
    for (int i = 0; i < count - k; i++) {
        cur = cur->next;
    }
    //�ҵ��µĿ�ʼ�ڵ�
    ListNode* newHead = cur->next;
    cur->next = nullptr;
    return newHead;

}
#endif // !__7__
