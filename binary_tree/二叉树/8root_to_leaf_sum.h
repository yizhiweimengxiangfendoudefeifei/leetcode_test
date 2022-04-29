#pragma once
#ifndef __8root_to_leaf_sum__
#define __8root_to_leaf_sum__


int total(TreeNode* r, int sum) {
    if (r == nullptr) {
        return 0;
    }
    else if (r->left == nullptr && r->right == nullptr) {
        return sum * 10 + r->val;
    }
    return total(r->left, sum * 10 + r->val) + total(r->right, sum * 10 + r->val);
}
int sumNumbers(TreeNode* root) {
    creatTree(root);
    return total(root, 0);
}

#endif // !__8root_to_leaf_sum__

