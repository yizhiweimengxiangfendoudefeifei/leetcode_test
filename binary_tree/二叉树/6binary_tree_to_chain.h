#pragma once
#ifndef __6binary_tree_to_chain__
#define __6binary_tree_to_chain__
#include<iostream>
#include<vector>

struct TreeNode6 {
    int val;
    TreeNode6* left;
    TreeNode6* right;
};
using namespace std;
vector<TreeNode6*> v6;
int flag = 1;


int depth(TreeNode6* r) {
    if (r == nullptr) {
        return 0;
    }

    int left = depth(r->left);
    int right = depth(r->right);
    return max(left, right) + 1;
}

void preOrder(TreeNode6* r) {
    if (r == nullptr) {
        return;
    }
    //v6.push_back(r);
    if (abs(depth((r->left) - depth(r->right))) > 1) {
        flag = 0;
    }
    preOrder(r->left);
    preOrder(r->right);
}
//按照前序遍历的方式创建
void creatTree(TreeNode6*& t) {
    int aa;
    cin >> aa;
    if (aa == 00) {
        t = NULL;//等同于return
    }
    else {
        t = new TreeNode6();
        if (!t) {
            exit(OVERFLOW);
        }
        t->val = aa;
        creatTree(t->left);
        creatTree(t->right);
    }

}
//给一个二叉树的根节点，把它展开成单链表
//void flatten(TreeNode6* root) {
//    preOrder(root);
//    for (int i = 1; i < v6.size(); i++) {
//        TreeNode6* pre = v6.at(i - 1);
//        TreeNode6* cur = v6.at(i);
//        pre->left = nullptr;
//        pre->right = cur;
//    }
//    
//
//}
bool isBalanced(TreeNode6* root) {
    creatTree(root);
    preOrder(root);
    if (flag) {
        return true;
    }
    else {
        return false;
    }
}

#endif // !__6binary_tree_to_chain__
