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

		break;
	case 3:
		cout << "��ѡ��Ĺ����ǣ�92. ��ת���� II" << endl;
		reverseBetween1(node, 2, 4);
		break;
	case 4:
		cout << "��ѡ��Ĺ����ǣ�24. �������������еĽڵ�" << endl;

		break;
	case 5:
		cout << "��ѡ��Ĺ����ǣ�141. ��������" << endl;
		cout << hasCycle(node);
		break;
	case 6:
		cout << "��ѡ��Ĺ����ǣ�2. �������" << endl;
		addTwoNumbers(node,node1);
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