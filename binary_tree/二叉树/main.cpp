#include"1maxDepth.h"
#include"2��ǰ�������������й��������.h"
#include"3binary_search_tree.h"
#include"4num_binary_tree_math.h"

//3_binary_search_tree
TreeNode* node{};

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
    default:
        break;
    }
    
    delete left, left1, right1, root, root1;

    system("pause");
    return 0;
}