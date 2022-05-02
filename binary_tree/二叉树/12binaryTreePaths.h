#pragma once
#ifndef __12__
#define __12__
#include <string>

vector<string> v_s;
void dfs_binaryPaths(TreeNode* r, string path, vector<string>& paths) {
    if (r == nullptr) {
        return;
    }
    path += to_string(r->val);

    if (r->left == nullptr && r->right == nullptr) {
        paths.push_back(path);
    }
    else {
        path += "->";
    }

    dfs_binaryPaths(r->left, path, paths);
    dfs_binaryPaths(r->right, path, paths);

}


vector<string> binaryTreePaths(TreeNode* root) {
    //preOrder(root);
    creatTree(root);
    dfs_binaryPaths(root, "", v_s);
    return v_s;

}
void myprint() {
    for (int i = 0; i < v_s.size(); i++) {
        cout << v_s[i] << "  ";
    }
    cout << endl;
}
#endif // !__12__
