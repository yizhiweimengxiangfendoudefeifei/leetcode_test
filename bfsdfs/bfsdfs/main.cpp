#include<iostream>
#include<queue>
#include<vector>

#include"lujing1.h"
#include"lujing2.h"
#include"lujing3_sum.h"
#include"4岛屿数量.h"
using namespace std;


TreeNode3* root3{};

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
		/*TreeNode* root = { 5,4,8,11,null,13,4,7,2,null,null,null,1 };
		if (hasPathSum(TreeNode* root, int target)) {
			cout << "ishave" << endl
		}
		else {
			cout << "nothave" << endl;
		}*/
	case 3:
		//返回路径的数量
		cout << "您选择的是力扣第437题路径总和3：" << endl;
		cout << "请按照前序遍历构造二叉树" << endl;
		createTree(root3);//10 5 3 3 # # -2 # # 2 # 1 # # -3 # 11 # #
		cout << pathSum3(root3, 8) << endl;
	case 4:
		//求和路径
		

	default:
		break;
	}

	



    system("pause");
    return 0;
}