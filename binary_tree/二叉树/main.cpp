struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
};
TreeNode* node7{};
#include"1maxDepth.h"
#include"2从前序和中序遍历序列构造二叉树.h"
#include"3binary_search_tree.h"
#include"4num_binary_tree_math.h"
#include"5num_binary_tree_math2.h"
#include"6binary_tree_to_chain.h"
#include"7balance_tree.h"
#include"8root_to_leaf_sum.h"
#include"9binary_max_sum.h"

//3_binary_search_tree

TreeNode6* node6{};



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
        
        //recoverTree(node);
        break;
    case 4:
        cout << "您选择力扣题目是：96.不同的二叉搜索树" << endl;
        cout << "3对应的互不相同的二叉搜索树有多少种？" << endl;
        cout << numTrees(3) << endl;
    case 5:
        cout << "您选择力扣题目是：95.不同的二叉搜索树2" << endl;
        cout << "4满足的二叉树的结构为：" << endl;
        //cout << generateTrees(3) << endl;
    case 6:
        cout << "您选择力扣题目是：114.二叉树展开成链表" << endl;
        cout << "展开的单链表为： " << endl;
        //flatten(node6);
        //isBalanced(node6);
    case 7:
        cout << "您选择力扣题目是：110.平衡二叉树" << endl;
        cout << isBalanced(node7) << endl;//二叉树的创建是 1 2 3 4 # # # # 2 # 3 # 4 # #
    case 8:
        cout << "您选择力扣题目是：129.求根节点到叶子节点的数字之和" << endl;
        cout << sumNumbers(node7) << endl;//1 2 # # 3 # #
    case 9:
        cout << "您选择力扣题目是：124.二叉树中的最短路径和" << endl;
        cout << "您需要创建的二叉树顺序是：-10 9 # # 20 15 # # 7 # #,答案是42" << endl;
        cout << maxPathSum(node7) << endl;

    default:
        break;
    }
    
    delete left, left1, right1, root, root1;

    system("pause");
    return 0;
}