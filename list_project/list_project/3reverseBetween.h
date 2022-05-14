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

    //�Ͽ�����
    pre->next = nullptr;
    rightNode->next = nullptr;

    reverseList(leftNode);

    pre->next = rightNode;
    leftNode->next = next;

    return dummy->next;
}

//�ݹ�ʵ��
ListNode* successor = nullptr;
ListNode* reverseN(ListNode* head, int right) {
    if (right == 1) {
        successor = head->next;
        return head;
    }
    //��head->nextΪ��㣬��Ҫ��תǰn-1���ڵ�
    ListNode* last = reverseN(head->next, right - 1);

    head->next->next = head;
    head->next = successor;
    return last;
}

ListNode* reverseBetween1(ListNode* head, int left, int right) {
    if (left == 1) {
        return reverseN(head, right);
    }

    head->next = reverseBetween1(head->next, left - 1, right - 1);
    return head;
}
#endif // !__3__
