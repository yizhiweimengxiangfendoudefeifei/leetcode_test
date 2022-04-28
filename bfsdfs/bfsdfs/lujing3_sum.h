#pragma once
#include <cstddef>
#ifndef __lujing3__
#define __lujing3__
using namespace std;

struct TreeNode3 {
    int val;
    TreeNode3* left;
    TreeNode3* right;    
};

//按照前序遍历的方式创建二叉树,这里传入的必须包含引用
void createTree(TreeNode3* &node) {
    int aa;
    cin >> aa;
    if (aa == 00) {
        node = NULL;
    }
    else
    {
        node = new TreeNode3();
        if (!node) {
            exit(OVERFLOW);
        }
        node->val = aa;
        createTree(node->left);
        createTree(node->right);
    }
}
int rootSum(TreeNode3* root, int sum) {
    
    if (!root) {
        return 0;
    }

    int ret = 0;
    if (root->val == sum) {
        ret++;
    }

    ret += rootSum(root->left, sum - root->val);
    ret += rootSum(root->right, sum - root->val);
    return ret;
}


int pathSum3(TreeNode3* root, int sum) {
    
    if (!root) {
        return 0;
    }

    int ret = rootSum(root, sum);
    ret += pathSum3(root->left, sum);
    ret += pathSum3(root->right, sum);
    return ret;
}
#endif // !__lujing3__
