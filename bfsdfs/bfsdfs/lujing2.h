#pragma once
#ifndef __lujing2__
#define __lujing2__
#include<unordered_map>
#include<vector>

unordered_map<TreeNode*, TreeNode*> parent;
vector<vector<int>> ret;

//����unordered_map�洢����ڵ������ڵ�Ĺ�ϵ�������ҵ�·��
void getPath(TreeNode* node) {
    vector<int> tmp;
    while (node != nullptr) {
        tmp.push_back(node->val);
        node = parent[node];
    }
    reverse(tmp.begin(), tmp.end());
    ret.push_back(tmp);
}
//����·����˳��,���������ǴӸ��ڵ㵽Ҷ�ӽڵ����
vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    if (root == nullptr) {
        return ret;
    }
    queue<TreeNode*> q_node;
    queue<int> q_val;


    q_node.push(root);
    q_val.push(0);


    while (!q_node.empty()) {
        TreeNode* now = q_node.front();
        q_node.pop();
        int temp1 = q_val.front() + now->val;
        q_val.pop();


        if (now->left == nullptr && now->right == nullptr) {
            if (temp1 == targetSum) {
                getPath(now);
            }
            continue;
        }

        if (now->left != nullptr) {
            parent[now->left] = now;
            q_node.push(now->left);
            q_val.push(temp1);
        }

        if (now->right != nullptr) {
            parent[now->right] = now;
            q_node.push(now->right);
            q_val.push(temp1);
        }
    }
    return ret;
}

#endif // !__lujing2__

