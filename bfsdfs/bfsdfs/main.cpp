#include<iostream>
#include<queue>
#include<vector>

#include"lujing1.h"
#include"lujing2.h"
#include"lujing3_sum.h"
#include"4��������.h"
using namespace std;


TreeNode3* root3{};

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
		/*TreeNode* root = { 5,4,8,11,null,13,4,7,2,null,null,null,1 };
		if (hasPathSum(TreeNode* root, int target)) {
			cout << "ishave" << endl
		}
		else {
			cout << "nothave" << endl;
		}*/
	case 3:
		//����·��������
		cout << "��ѡ��������۵�437��·���ܺ�3��" << endl;
		cout << "�밴��ǰ��������������" << endl;
		createTree(root3);//10 5 3 3 # # -2 # # 2 # 1 # # -3 # 11 # #
		cout << pathSum3(root3, 8) << endl;
	case 4:
		//���·��
		

	default:
		break;
	}

	



    system("pause");
    return 0;
}