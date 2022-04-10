#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    int row = intervals.size();

    sort(intervals.begin(), intervals.end(), [](const auto& arr1, const auto& arr2) {
        return arr1[1] < arr2[1];
    });

    int count = 1;
    int pre = intervals[0][1];
    for (int i = 1; i < row; i++) {
        if (intervals[i][0] >= pre) {
            count++;
            pre = intervals[i][1];
        }
    }
    return row - count;
}

int main() {
    vector<vector<int>> interval = { {1,2},{2,3},{3,4},{1,3} };
    cout << eraseOverlapIntervals(interval);
	system("pause");
	return 0;
}