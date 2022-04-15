#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int candy(vector<int>& arr) {
    // write code here

    int m = arr.size(), num = 0;
    //qsort(arr.begin(),m,sizeof(int),compare);
    sort(arr.begin(), arr.end());
    vector<int> arr1(m);
    arr1[0] = 1;
    for (int i = 1; i < m; i++) {
        if (arr[i] - arr[i - 1] > 0) {
            arr1[i] = arr1[i - 1] + 1;
        }
        else {
            arr1[i] = arr1[i - 1];
        }

    }
    for (int i = 0; i < m; i++) {
        num += arr1[i];
    }
    return num;

}

int main() {
    vector<int> arr = { 1,4,2,7,9 };
    cout << candy(arr) << endl;
    system("pause");
    return 0;
}