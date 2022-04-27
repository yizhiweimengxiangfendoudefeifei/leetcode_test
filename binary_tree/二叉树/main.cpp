#include"1maxDepth.h"
#include"2从前序和中序遍历序列构造二叉树.h"
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
    cout << "请输入您选择的工程序号(start=1)： " << endl;
    int choice;
    std::cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "您选择力扣题目是：104.二叉树的最大深度" << endl;
        cout << maxDepth(root) << endl;
        break;
    case 2:
        cout << "您选择力扣题目是：104.二叉树的最大深度" << endl;
        break;
    case 3:
        cout << "您选择力扣题目是：99.恢复二叉搜索树" << endl;
        
        recoverTree(node);
        break;
    case 4:
        cout << "您选择力扣题目是：96.不同的二叉搜索树" << endl;
        cout << "3对应的互不相同的二叉搜索树有多少种？" << endl;
        cout << numTrees(3) << endl;
    default:
        break;
    }
    
    delete left, left1, right1, root, root1;

    system("pause");
    return 0;
}