struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) :val(x), left(nullptr), right(nullptr) {}
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
#include"10longestUnivaluePath.h"
#include"11diameterofBinary.h"
#include"12binaryTreePaths.h"
#include"13rob3.h"
#include"14isValidBST.h"
#include"15insertIntoBST.h"
#include"16convertBST.h"


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
        break;
    case 5:
        cout << "您选择力扣题目是：95.不同的二叉搜索树2" << endl;
        cout << "4满足的二叉树的结构为：" << endl;
        //cout << generateTrees(3) << endl;
        break;
    case 6:
        cout << "您选择力扣题目是：114.二叉树展开成链表" << endl;
        cout << "展开的单链表为： " << endl;
        //flatten(node6);
        //isBalanced(node6);
        break;
    case 7:
        cout << "您选择力扣题目是：110.平衡二叉树" << endl;
        cout << isBalanced(node7) << endl;//二叉树的创建是 1 2 3 4 # # # # 2 # 3 # 4 # #
        break;
    case 8:
        cout << "您选择力扣题目是：129.求根节点到叶子节点的数字之和" << endl;
        cout << "您需要创建的二叉树顺序是：1 2 # # 3 # #" << endl;
        cout << sumNumbers(node7) << endl;
        break;
    case 9:
        cout << "您选择力扣题目是：124.二叉树中的最短路径和" << endl;
        cout << "您需要创建的二叉树顺序是：-10 9 # # 20 15 # # 7 # #,答案是42" << endl;
        cout << maxPathSum(node7) << endl;
        break;
    case 10:
        cout << "您选择力扣题目是：687. 最长同值路径" << endl;
        cout << "您需要创建的二叉树顺序是：5 4 1 # # 1 # # 5 # 5 # #,答案是2" << endl;
        cout << longestUnivaluePath(node7) << endl;
        break;
    case 11:
        cout << "您选择力扣题目是：543. 二叉树的直径" << endl;
        cout << "您需要创建的二叉树顺序是：1 2 4 # # 5 # # 3 # #,答案是3" << endl;
        cout << diameterOfBinaryTree(node7) << endl;
        break;
    case 12:
        cout << "您选择力扣题目是：257. 二叉树的所有路径" << endl;
        cout << "您需要创建的二叉树顺序是：1 2 # 5 # # 3 # #" << endl;//输出形式如"1->2->5","1->3"
        binaryTreePaths(node7);
        myprint();
        break;
    case 13:
        cout << "您选择力扣题目是：337. 打家劫舍 III" << endl;
        cout << "您需要创建的二叉树顺序是：3 2 # 3 # # 3 # 1 # #" << endl;//输出3+3+1=7"
        cout << "小偷最多能偷的钱数是：" << rob(node7) << endl;
        
        break;
    case 14:
        cout << "您选择力扣题目是：98. 验证二叉搜索树" << endl;
        cout << "您需要创建的二叉树顺序是：5 1 # # 4 3 # # 6 # #" << endl;//输出false"
        cout << isValidBST(node7) << endl;
        break;
    case 15:
        cout << "您选择力扣题目是：701. 二叉搜索树中的插入操作" << endl;
        cout << "您需要创建的二叉树顺序是：4 2 1 # # 3 # # 7 # #" << endl;//输出"
        insertIntoBST(node7,5);
        break;
    case 16:
        cout << "您选择力扣题目是：剑指 Offer II 054. 所有大于等于节点的值之和" << endl;
        cout << "您需要创建的二叉树顺序是：2 0 -4 # # 1 # # 3 # #" << endl;//输出5 6 2 6 3"
        convertBST(node7);
        break;
    default:
        break;
    }
    
    delete left, left1, right1, root, root1;

    system("pause");
    return 0;
}