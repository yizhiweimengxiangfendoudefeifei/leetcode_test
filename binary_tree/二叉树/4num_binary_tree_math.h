#pragma once
#ifndef __4num_binary_tree_math__
#define __4num_binary_tree_math__

//����һ����ѧ�⣬��Ӧ��ģ���ǿ�������
int numTrees(int n) {
    long long c = 1;
    for (int i = 0; i < n; ++i) {
        c = c * 2 * (2 * i + 1) / (i + 2);
    }
    return (int)c;
}

#endif // !__4num_binary_tree_math__
