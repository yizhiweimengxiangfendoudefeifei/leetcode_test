#include"1maxDepth.h"
#include"2��ǰ�������������й��������.h"


int main() {
    TreeNode* left = new TreeNode(9);
    TreeNode* left1 = new TreeNode(15);
    TreeNode* right1 = new TreeNode(7);
    TreeNode* root1 = new TreeNode(20,left1,right1);
    TreeNode* root = new TreeNode(3, left, root1);
    cout << "��������ѡ��Ĺ������(start=1)�� " << endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "��ѡ��������Ŀ�ǣ�104.��������������" << endl;
        cout << maxDepth(root) << endl;
        break;
    case 2:
        cout << "��ѡ��������Ŀ�ǣ�104.��������������" << endl;
        cout 
    default:
        break;
    }
    
    delete left, left1, right1, root, root1;

    system("pause");
    return 0;
}