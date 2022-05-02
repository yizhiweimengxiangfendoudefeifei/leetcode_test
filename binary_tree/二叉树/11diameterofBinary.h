#pragma once
#ifndef __11diameterofBinary__
#define __11diameterofBinary__

int dfs_diameter(TreeNode* r) {
    if (r == nullptr) {
        return 0;
    }
    int left = dfs_diameter(r->left);
    int right = dfs_diameter(r->right);
    num = max(num, left + right);
    return max(left, right) + 1;
}
int diameterOfBinaryTree(TreeNode* root) {
    creatTree(root);
    if (root == nullptr) {
        return 0;
    }
    dfs_diameter(root);
    return num;
}
#endif // !__11diameterofBinary__
