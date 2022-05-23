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
	cout << "����һ�������̵ļ�¼����������ѡ��Ĺ��̺ţ�" << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "��ѡ��Ĺ����ǣ�����82.ɾ�����������е��ظ�Ԫ�� II" << endl;
		cout << "�����������Ϊ��1 2 3 3 4 4 5����Ϊ1 2 5" << endl;
		printList(deleteDuplicates(node));
		break;
	case 2:
		cout << "��ѡ��Ĺ����ǣ�����206.��ת����" << endl;
		cout << "�����������Ϊ��1 2 3 4 5����Ϊ5 4 3 2 1" << endl;
		createList(node);
		printList(reverseList(node));
		break;
	case 3:
		cout << "��ѡ��Ĺ����ǣ�92. ��ת���� II" << endl;
		cout << "�����������Ϊ��1 2 3 4 5����Ϊ1 4 3 2 5" << endl;
		createList(node);
		printList(reverseBetween1(node, 2, 4));
		break;
	case 4:
		cout << "��ѡ��Ĺ����ǣ�24. �������������еĽڵ�" << endl;
		cout << "�����������Ϊ��1 2 3 4����Ϊ2 1 4 3" << endl;
		createList(node);
		printList(swapPairs(node));
		break;
	case 5:
		cout << "��ѡ��Ĺ����ǣ�141. ��������" << endl;
		cout << "�����������Ϊ��3,2,0,-4" << endl;
		cout << hasCycle(node);
		break;
	case 6:
		cout << "��ѡ��Ĺ����ǣ�2. �������" << endl;
		cout << "���������������Ϊ��2 4 3��5 6 4����Ϊ7 0 8" << endl;
		printList(addTwoNumbers(node, node1));
		break;
	case 7:
		cout << "��ѡ��Ĺ����ǣ�61.��ת����" << endl;
		cout << "�����������Ϊ��1,2,3,4,5����Ϊ4 5 1 2 3" << endl;
		printList(rotateRight(node, 2));
		break;
	case 8:
		cout << "��ѡ��Ĺ����ǣ�328.��ż����" << endl;
		cout << "�����������Ϊ1,2,3,4,5" << endl;
		printList(oddEvenList(node));
	default:
		break;
	}
	system("pause");
	return 0;
}