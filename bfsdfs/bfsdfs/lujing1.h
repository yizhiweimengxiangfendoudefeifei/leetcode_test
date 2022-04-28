#pragma once
#ifndef __lujing1__ 
#define __lujing1__
#include<iostream>
#include<vector>
using namespace std;

struct TreeNode1 {
    int val;
    TreeNode1* left;
    TreeNode1* right;
    TreeNode1() : val(0), left(nullptr), right(nullptr) {}
    TreeNode1(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode1(int x, TreeNode1* left, TreeNode1* right) : val(x), left(left), right(right) {}
    
};
bool hasPathSum(TreeNode1* root, int targetSum) {
    if (root == nullptr) {
        return false;
    }
    queue<TreeNode1*> q_sum;
    queue<int> q_val;
    
    q_sum.push(root);
    q_val.push(root->val);
    while (!q_sum.size()) {
        TreeNode1* now = q_sum.front();
        int temp = q_val.front();
        q_sum.pop();
        q_val.pop();

        if (now->left == nullptr && now->right == nullptr) {
            if (temp == targetSum) {
                return true;
            }
            continue;
        }

        if (now->left != nullptr) {
            q_sum.push(now->left);
            q_val.push(now->left->val + temp);
        }

        if (now->right != nullptr) {
            q_sum.push(now->right);
            q_val.push(now->right->val + temp);
        }
    }
    return false;

}

#endif


