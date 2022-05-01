#pragma once
#ifndef __10longestUnivaluePath__
#define __10longestUnivaluePath__

int num = 0;
int dfs(TreeNode* r) {
    if (r == nullptr) {
        return 0;
    }
    int left = dfs(r->left);
    int right = dfs(r->right);
    if (r->left && r->val == r->left->val) {
        ++left;
    }
    else {
        left = 0;
    }

    if (r->right && r->val == r->right->val) {
        ++right;
    }
    else {
        right = 0;
    }
    num = max(num, left + right);
    return max(left, right);


}
int longestUnivaluePath(TreeNode* root) {
    creatTree(root);
    if (root == nullptr) {
        return 0;
    }
    dfs(root);

    return num;
}
#endif // !_10longestUnivaluePath__
