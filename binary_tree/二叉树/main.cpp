#include"1maxDepth.h"
#include"2��ǰ�������������й��������.h"
#include"3binary_search_tree.h"
#include"4num_binary_tree_math.h"
#include"5num_binary_tree_math2.h"
#include"6binary_tree_to_chain.h"

//3_binary_search_tree
TreeNode* node{};
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
        
        recoverTree(node);
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
        flatten(node6);

    default:
        break;
    }
    
    delete left, left1, right1, root, root1;

    system("pause");
    return 0;
}