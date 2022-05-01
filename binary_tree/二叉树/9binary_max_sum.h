#pragma once
#ifndef __9binary_max_sum__
#define __9binary_max_sum__
int res = INT_MIN;

int maxPath(TreeNode* r) {
    if (r == nullptr) {
        return 0;
    }
    int left = max(maxPath(r->left), 0);
    int right = max(maxPath(r->right), 0);
    res = max(res, left + right + r->val);
    return max(left + r->val, right + r->val);
}
int maxPathSum(TreeNode* root) {
    creatTree(root);
    maxPath(root);
    return res;
}
#endif // !__9binary_max_sum__