#pragma once
#ifndef __2__
#define __2__
#include<iostream>
#include<unordered_map>
#include<vector>
#include"1maxDepth.h"
using namespace std;

//从前序和中序遍历序列构造二叉树
unordered_map<int, int> index;

TreeNode* mybuildTree(vector<int> preorder, vector<int> inorder, int pre_left, int pre_right, int in_left, int in_right) {
    if (pre_left > pre_right) {
        return nullptr;
    }

    int preorder_root = pre_left;
    int inorder_root = index[preorder[preorder_root]];
    //把根节点建立起来
    TreeNode* now = new TreeNode(preorder[preorder_root]);


    //左子树递归
    now->left = mybuildTree(preorder, inorder, pre_left + 1, inorder_root - in_left + pre_left, in_left, inorder_root - 1);
    //右子树递归
    now->right = mybuildTree(preorder, inorder, inorder_root - in_left + pre_left + 1, pre_right, inorder_root + 1, in_right);
    return now;
}

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    int n = preorder.size();


    for (int i = 0; i < n; i++) {
        index[inorder[i]] = i;
    }
    return mybuildTree(preorder, inorder, 0, n - 1, 0, n - 1);
}
#endif // !__2__

