#include<iostream>
#include"1deleteDuplicates.h"
#include"2reverseList.h"
#include"3reverseBetween.h"
#include"4swapPairs.h"
using namespace std;


int main() {
	cout << "这是一个链表工程的记录，请输入您选择的工程号：" << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "您选择的工程是：力扣82.删除排序链表中的重复元素 II" << endl;

		break;
	case 4:
		cout << "您选择的工程是：24. 两两交换链表中的节点" << endl;

		break;
	default:
		break;
	}
	system("pause");
	return 0;
}