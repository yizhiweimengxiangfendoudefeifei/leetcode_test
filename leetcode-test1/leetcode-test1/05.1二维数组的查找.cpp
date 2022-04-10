#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool Find(int target, vector<vector<int>> array) {
    int row = array.size();
    int col = array[0].size();

    if (row == 0) {
        return false;
    }
    for (int i = 0; i < row; i++) {

        for (int j = 0; j < col; j++) {
            int l = 0;
            int r = col - 1;
            while (l <= r) {
                int mid = (l + r) / 2;
                if (array[i][mid] == target) {
                    return true;
                }
                if (target <= array[i][mid]) {
                    //target在mid的左边
                    r = mid - 1;
                }
                else {
                    l = mid + 1;
                }
            }
        }
    }
    return false;
}

//int main() {
//    vector<vector<int>> nums = { {1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15} };//为什么不能用引用？
//    
//    cout << Find(7,nums);
//    system("pause");
//    return 0;
//}