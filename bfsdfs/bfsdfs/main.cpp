#include<iostream>
#include<queue>

#include"lujing1.h"
using namespace std;


int main() {
    cout << "��������Ҫѡ��Ĺ������: " << endl;
	int input;
	cin >> input;
	switch (input)
	{
	case 1:

		break;
	case 2:
		cout << "����������: " << endl;
		int target;
		cin >> target;
		TreeNode* root = { 5,4,8,11,null,13,4,7,2,null,null,null,1 };
		if (hasPathSum(TreeNode* root, int target)) {
			cout << "ishave" << endl
		}
		else {
			cout << "nothave" << endl;
		}

	default:
		break;
	}



    system("pause");
    return 0;
}