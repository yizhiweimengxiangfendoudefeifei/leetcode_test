#include<iostream>
#include<queue>

#include"lujing1.h"
using namespace std;


int main() {
    cout << "请输入您要选择的工程序号: " << endl;
	int input;
	cin >> input;
	switch (input)
	{
	case 1:

		break;
	case 2:
		cout << "请输入数字: " << endl;
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