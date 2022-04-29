#pragma once
#ifndef __7balance_tree__
#define __7balance_tree__


int depth(TreeNode* r) {
    if (r == nullptr) {
        return 0;
    }


    int left = depth(r->left);
    int right = depth(r->right);
    return max(left, right) + 1;
}



bool isBalanced(TreeNode* root) {
    creatTree(root);
    if (root == nullptr) {
        return true;
    }
    else {

        return (abs(depth(root->left) - depth(root->right)) <= 1 && isBalanced(root->left) && isBalanced(root->right));

    }
}
#endif // !__7balance_tree__
