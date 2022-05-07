#pragma once
#ifndef  __13__
#define __13__

//unordered_map <TreeNode*, int> f, g;
struct myStruct {
    int selected;
    int notSelected;
};
myStruct dfs_rob(TreeNode* root) {
    if (root == nullptr) {
        return{0,0};
    }
    auto l = dfs_rob(root->left);
    auto r = dfs_rob(root->right);
    int selected1 = root->val + l.notSelected + r.notSelected;
    int notSelected1 = max(r.selected, r.notSelected) + max(l.selected, l.notSelected);
    //f[r] = r->val + g[r->left] + g[r->right];
    //g[r] = max(f[r->left], g[r->left]) + max(f[r->right], g[r->right]);
    return { selected1,notSelected1 };
    //f[r] = r->val + g[r->left] + g[r->right];
    //cout << f[r] << endl;
    //g[r] = max(f[r->left], g[r->left]) + max(f[r->right], g[r->right]);
    //cout << g[r] << endl;


}
int rob(TreeNode* root) {
    creatTree(root);
    auto rootStatus = dfs_rob(root);
    return max(rootStatus.selected, rootStatus.notSelected);
        
}
#endif // ! __13__
