#pragma once
#include <cstddef>
#ifndef __lujing3__
#define __lujing3__

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    
};
int rootSum(TreeNode* root, int sum) {
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


int pathSum3(TreeNode* root, int sum) {
    if (!root) {
        return 0;
    }

    int ret = rootSum(root, sum);
    ret += pathSum3(root->left, sum);
    ret += pathSum3(root->right, sum);
    return ret;
}
#endif // !__lujing3__
