#pragma once
#ifndef __16__
#define __16__

vector<int> v_con;

void preOrder_con(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    preOrder_con(root->left);
    v_con.push_back(root->val);
    preOrder_con(root->right);
}
void preOrder(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    printf("%d", root->val);
    preOrder(root->left);
    preOrder(root->right);
}
void conver(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    conver(root->left);
    conver(root->right);
    for (int i = 0; i < v_con.size(); i++) {
        if (root->val == v_con[i]) {
            for (int j = i + 1; j < v_con.size(); ++j) {
                root->val += v_con[j];
            }
        }
    }
}
void convertBST(TreeNode* root) {
    creatTree(root);
    preOrder_con(root);

    /*for (int i = 0; i < v_con.size(); i++) {
        cout << v_con[i] << " ";
    }*/
    conver(root);
    //Ç°Ðò±éÀúÊä³ö
    preOrder(root);
    //return root;
}
#endif // !__16__
