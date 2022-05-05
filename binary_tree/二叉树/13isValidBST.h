#pragma once
#ifndef __13__
#define __13__

bool isValidBST(TreeNode* node, TreeNode* min, TreeNode* max) {
    if (node == nullptr) {
        return true;
    }
    if (min != nullptr && min->val >= node->val) {
        return false;
    }
    if (max != nullptr && max->val <= node->val) {
        return false;
    }

    return isValidBST(node->left, min, node) && isValidBST(node->right, node, max);
}
bool isValidBST(TreeNode* root) {
    creatTree(root);
    return isValidBST(root, nullptr, nullptr);
}
#endif // !__13__
