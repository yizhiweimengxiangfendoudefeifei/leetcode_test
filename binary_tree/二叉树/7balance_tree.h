#pragma once
#ifndef __7balance_tree__
#define __7balance_tree__

//按照前序遍历的方式创建
void creatTree(TreeNode*& t) {
    int aa;
    cin >> aa;
    if (aa == 00) {
        t = NULL;//等同于return
    }
    else {
        t = new TreeNode();
        if (!t) {
            exit(OVERFLOW);
        }
        t->val = aa;
        creatTree(t->left);
        creatTree(t->right);
    }

}
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
