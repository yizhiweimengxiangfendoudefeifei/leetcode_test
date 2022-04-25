#pragma once
#ifndef __1maxDepth__
#define __1maxDepth__
#include<iostream>
#include<algorithm>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}

};

int maxDepth(TreeNode* root) {
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
