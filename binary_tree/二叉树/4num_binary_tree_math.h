#pragma once
#ifndef __4num_binary_tree_math__
#define __4num_binary_tree_math__

//这是一个数学题，对应的模型是卡塔兰数
int numTrees(int n) {
    long long c = 1;
    for (int i = 0; i < n; ++i) {
        c = c * 2 * (2 * i + 1) / (i + 2);
    }
    return (int)c;
}

#endif // !__4num_binary_tree_math__
