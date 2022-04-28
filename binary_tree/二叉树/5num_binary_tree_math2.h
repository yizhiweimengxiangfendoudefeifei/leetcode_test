#pragma once
#ifndef __5num_binary_tree_math2__
#define __5num_binary_tree_math2__
#include<iostream>

#include<vector>
using namespace std;

struct TreeNode2 {
    int  val;
    TreeNode2* left;
    TreeNode2* right;
};
vector<TreeNode2*> generate(int start, int end) {
    if (start > end) {
        return { nullptr };
    }

    vector<TreeNode2*> allTree;
    for (int i = start; i <= end; i++) {
        vector<TreeNode2*> leftTree = generate(start, i - 1);

        vector<TreeNode2*> rightTree = generate(i + 1, end);

        for (auto& left1 : leftTree) {
            for (auto& right1 : rightTree) {
                TreeNode2* root = new TreeNode2(i);

                root->left = left1;
                root->right = right1;
                allTree.push_back(root);
            }
        }


    }
    return allTree;
}

vector<TreeNode2*> generateTrees(int n) {
    if (!n) {
        return {};
    }
    return generate(1, n);
}
#endif // !__5num_binary_tree_math2__
