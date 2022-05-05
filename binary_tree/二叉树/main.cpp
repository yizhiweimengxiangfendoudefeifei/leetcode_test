struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
};
TreeNode* node7{};
#include"1maxDepth.h"
#include"2��ǰ�������������й��������.h"
#include"3binary_search_tree.h"
#include"4num_binary_tree_math.h"
#include"5num_binary_tree_math2.h"
#include"6binary_tree_to_chain.h"
#include"7balance_tree.h"
#include"8root_to_leaf_sum.h"
#include"9binary_max_sum.h"
#include"10longestUnivaluePath.h"
#include"11diameterofBinary.h"
#include"12binaryTreePaths.h"
#include"13isValidBST.h"

//3_binary_search_tree

TreeNode6* node6{};



int main() {
    TreeNode1* left = new TreeNode1(9);
    TreeNode1* left1 = new TreeNode1(15);
    TreeNode1* right1 = new TreeNode1(7);
    TreeNode1* root1 = new TreeNode1(20,left1,right1);
    TreeNode1* root = new TreeNode1(3, left, root1);
    cout << "��������ѡ��Ĺ������(start=1)�� " << endl;
    int choice;
    std::cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "��ѡ��������Ŀ�ǣ�104.��������������" << endl;
        cout << maxDepth(root) << endl;
        break;
    case 2:
        cout << "��ѡ��������Ŀ�ǣ�104.��������������" << endl;
        break;
    case 3:
        cout << "��ѡ��������Ŀ�ǣ�99.�ָ�����������" << endl;
        
        //recoverTree(node);
        break;
    case 4:
        cout << "��ѡ��������Ŀ�ǣ�96.��ͬ�Ķ���������" << endl;
        cout << "3��Ӧ�Ļ�����ͬ�Ķ����������ж����֣�" << endl;
        cout << numTrees(3) << endl;
    case 5:
        cout << "��ѡ��������Ŀ�ǣ�95.��ͬ�Ķ���������2" << endl;
        cout << "4����Ķ������ĽṹΪ��" << endl;
        //cout << generateTrees(3) << endl;
    case 6:
        cout << "��ѡ��������Ŀ�ǣ�114.������չ��������" << endl;
        cout << "չ���ĵ�����Ϊ�� " << endl;
        //flatten(node6);
        //isBalanced(node6);
    case 7:
        cout << "��ѡ��������Ŀ�ǣ�110.ƽ�������" << endl;
        cout << isBalanced(node7) << endl;//�������Ĵ����� 1 2 3 4 # # # # 2 # 3 # 4 # #
    case 8:
        cout << "��ѡ��������Ŀ�ǣ�129.����ڵ㵽Ҷ�ӽڵ������֮��" << endl;
        cout << "����Ҫ�����Ķ�����˳���ǣ�1 2 # # 3 # #" << endl;
        cout << sumNumbers(node7) << endl;
    case 9:
        cout << "��ѡ��������Ŀ�ǣ�124.�������е����·����" << endl;
        cout << "����Ҫ�����Ķ�����˳���ǣ�-10 9 # # 20 15 # # 7 # #,����42" << endl;
        cout << maxPathSum(node7) << endl;
    case 10:
        cout << "��ѡ��������Ŀ�ǣ�687. �ֵͬ·��" << endl;
        cout << "����Ҫ�����Ķ�����˳���ǣ�5 4 1 # # 1 # # 5 # 5 # #,����2" << endl;
        cout << longestUnivaluePath(node7) << endl;
    case 11:
        cout << "��ѡ��������Ŀ�ǣ�543. ��������ֱ��" << endl;
        cout << "����Ҫ�����Ķ�����˳���ǣ�1 2 4 # # 5 # # 3 # #,����3" << endl;
        cout << diameterOfBinaryTree(node7) << endl;
    case 12:
        cout << "��ѡ��������Ŀ�ǣ�257. ������������·��" << endl;
        cout << "����Ҫ�����Ķ�����˳���ǣ�1 2 # 5 # # 3 # #" << endl;//�����ʽ��"1->2->5","1->3"
        binaryTreePaths(node7);
        myprint();
    case 13:
        cout << "��ѡ��������Ŀ�ǣ�98. ��֤����������" << endl;
        cout << "����Ҫ�����Ķ�����˳���ǣ�5 1 # # 4 3 # # 6 # #" << endl;//���false"
        cout << isValidBST(node7) << endl;
    default:
        break;
    }
    
    delete left, left1, right1, root, root1;

    system("pause");
    return 0;
}