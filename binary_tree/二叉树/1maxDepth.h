#pragma once
#ifndef __1maxDepth__
#define __1maxDepth__
#include<iostream>
#include<algorithm>
using namespace std;
struct TreeNode1 {
    int val;
    TreeNode1* left;
    TreeNode1* right;
    TreeNode1() : val(0), left(nullptr), right(nullptr) {}
    TreeNode1(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode1(int x, TreeNode1* left, TreeNode1* right) : val(x), left(left), right(right) {}

};

int maxDepth(TreeNode1* root) {
    if (root == nullptr) {
        return 0;
    }
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    return max(left, right) + 1;
    /*int depth = max(maxDepth(root->left), maxDepth(root->right)) + 1;
    return depth;*/
}
#endif // !__1maxDepth__
