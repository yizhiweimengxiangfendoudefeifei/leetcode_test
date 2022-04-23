#include<iostream>
#include<queue>
#include<vector>

#include"lujing1.h"
#include"lujing2.h"
#include"lujing3_sum.h"
#include"4岛屿数量.h"
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
	case 3:
		//返回路径的顺序
		cout << pathSum(TreeNode * root, int targetSum);
	case 4:
		//求和路径
		TreeNode * node1{ 5, 4, 8, 11, null, 13, 4, 7, 2, null, null, 5, 1 };
		cout << pathSum3(TreeNode * root, 22) << endl;

	default:
		break;
	}

	



    system("pause");
    return 0;
}