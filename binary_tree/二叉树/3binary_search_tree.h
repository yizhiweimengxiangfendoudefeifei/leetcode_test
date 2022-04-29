#pragma once
#ifndef __3binary_search_tree__
#define __3binary_search_tree__
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


vector<int> v;


//按照前序遍历的方式创建
void creatTree(TreeNode* &t) {
	int aa;
	cin >> aa;
	if (aa == 00) {
		t = NULL;//等同于return
	}
	else {
		t = new TreeNode();
		if (!t) {
			exit(OVERFLOW);
		}
		t->val = aa;
		creatTree(t->left);
		creatTree(t->right);
	}

}

void inOrder(TreeNode* node) {
	if (node == nullptr) {
		return;
	}

	inOrder(node->left);
	v.push_back(node->val);
	inOrder(node->right);
}

//中序遍历输出
void inOrder1(TreeNode* node) {
	if (node == nullptr) {
		return;
	}

	inOrder1(node->left);
	printf("%d", node->val);
	inOrder1(node->right);
}

//交换两个放错位置的元素
void recover(TreeNode* root, int num,int x,int y) {
	if (root != nullptr) {
		if (root->val == x || root->val == y) {
			root->val = root->val == x ? y : x;
			if (--num == 0) {
				return;
			}
		}
		recover(root->left, num, x, y);
		recover(root->right, num, x, y);
	}
	
	
}
void recoverTree(TreeNode* root) {
	//TreeNode* T{};
	creatTree(root);//3 1 # # 4 2 # # #

	inOrder(root);
	vector<int> v2 = v;
	int arr[2], index = 0;
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		if (v2[i] != v[i]) {
			arr[index] = i;
			index++;
		}
	}
	recover(root, 2, v2[arr[0]], v2[arr[1]]);
	//中序遍历输出，递增
	inOrder1(root);




}
#endif // !__3binary_search_tree__
