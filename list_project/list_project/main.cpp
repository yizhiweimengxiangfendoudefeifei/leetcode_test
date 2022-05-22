#include<iostream>
#include"1deleteDuplicates.h"
#include"2reverseList.h"
#include"3reverseBetween.h"
#include"4swapPairs.h"
#include"5hascycle.h"
#include"6addTwoNumbers.h"
#include"7rotateRight.h"
#include"8oddEvenList.h"
using namespace std;

ListNode* node{};
ListNode* node1{};
void printList(ListNode* head) {
	while (head != nullptr) {
		cout << head->val << "  ";
		head = head->next;

	}
	cout << endl;
}
int main() {
	cout << "这是一个链表工程的记录，请输入您选择的工程号：" << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "您选择的工程是：力扣82.删除排序链表中的重复元素 II" << endl;

		break;
	case 3:
		cout << "您选择的工程是：92. 反转链表 II" << endl;
		reverseBetween1(node, 2, 4);
		break;
	case 4:
		cout << "您选择的工程是：24. 两两交换链表中的节点" << endl;

		break;
	case 5:
		cout << "您选择的工程是：141. 环形链表" << endl;
		cout << hasCycle(node);
		break;
	case 6:
		cout << "您选择的工程是：2. 两数相加" << endl;
		addTwoNumbers(node,node1);
		break;
	case 7:
		cout << "您选择的工程是：61.旋转链表" << endl;
		cout << "您输入的链表为：1,2,3,4,5，答案为4 5 1 2 3" << endl;
		
		
		printList(rotateRight(node, 2));
		break;
	case 8:
		cout << "您选择的工程是：328.奇偶链表" << endl;
		cout << "您输入的链表为1,2,3,4,5" << endl;
		printList(oddEvenList(node));
	default:
		break;
	}
	system("pause");
	return 0;
}