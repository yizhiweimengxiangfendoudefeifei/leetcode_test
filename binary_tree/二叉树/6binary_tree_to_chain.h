#pragma once
#ifndef __6binary_tree_to_chain__
#define __6binary_tree_to_chain__
#include<iostream>
#include<vector>

using namespace std;
vector<TreeNode6*> v6;

struct TreeNode6 {
    int val;
    TreeNode6* left;
    TreeNode6* right;
};

void preOrder(TreeNode6* r) {
    if (r == nullptr) {
        return;
    }
    v6.push_back(r);
    preOrder(r->left);
    preOrder(r->right);
}

//给一个二叉树的根节点，把它展开成单链表
void flatten(TreeNode6* root) {
    preOrder(root);
    for (int i = 1; i < v6.size(); i++) {
        TreeNode6* pre = v6.at(i - 1);
        TreeNode6* cur = v6.at(i);
        pre->left = nullptr;
        pre->right = cur;
    }
    

}
#endif // !__6binary_tree_to_chain__
