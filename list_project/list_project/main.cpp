#include<iostream>
#include"1deleteDuplicates.h"
#include"2reverseList.h"
#include"3reverseBetween.h"
#include"4swapPairs.h"
#include"5hascycle.h"
#include"6addTwoNumbers.h"
using namespace std;

ListNode* node{};
ListNode* node1{};
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
		cout << "��ѡ��Ĺ���ʦ��141. ��������" << endl;
		hasCycle(node);
		break;
	case 6:
		cout << "��ѡ��Ĺ���ʦ��2. �������" << endl;
		addTwoNumbers(node,node1);
		break;
	default:
		break;
	}
	system("pause");
	return 0;
}