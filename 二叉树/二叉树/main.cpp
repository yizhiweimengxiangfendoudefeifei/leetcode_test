#include"1maxDepth.h"
#include"2从前序和中序遍历序列构造二叉树.h"


int main() {
    TreeNode* left = new TreeNode(9);
    TreeNode* left1 = new TreeNode(15);
    TreeNode* right1 = new TreeNode(7);
    TreeNode* root1 = new TreeNode(20,left1,right1);
    TreeNode* root = new TreeNode(3, left, root1);
    cout << "请输入您选择的工程序号(start=1)： " << endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "您选择力扣题目是：104.二叉树的最大深度" << endl;
        cout << maxDepth(root) << endl;
        break;
    case 2:
        cout << "您选择力扣题目是：104.二叉树的最大深度" << endl;
        cout 
    default:
        break;
    }
    
    delete left, left1, right1, root, root1;

    system("pause");
    return 0;
}