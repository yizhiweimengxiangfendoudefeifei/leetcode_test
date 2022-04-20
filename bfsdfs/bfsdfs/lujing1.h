#pragma once
#ifndef __lujing1__ 
#define __lujing1__

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
    
};
bool hasPathSum(TreeNode* root, int targetSum) {
    if (root == nullptr) {
        return false;
    }
    queue<TreeNode*> q_sum;
    queue<int> q_val;
    
    q_sum.push(root);
    q_val.push(root->val);
    while (!q_sum.size()) {
        TreeNode* now = q_sum.front();
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


