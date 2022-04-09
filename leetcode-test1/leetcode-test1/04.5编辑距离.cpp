#include<iostream>
#include<vector>
using namespace std;

int minDistance(string word1, string word2) {
    //int row = word1.length();
    //int col = word2.length();
    //vector<vector<int>> dp(row + 1, vector<int>(col + 1));
    //if (row * col == 0) {
    //    return row + col;
    //}
    ////写第一行为0的情况
    //dp[0][0] = 0;
    //for (int i = 1; i <= col; i++) {
    //    dp[0][i] = dp[0][i - 1] + 1;
    //}
    ////写第一列为0的情况
    //for (int i = 1; i <= row; i++) {
    //    dp[i][0] = dp[i - 1][0] + 1;
    //}
    //for (int i = 1; i <= row; i++) {
    //    for (int j = 1; j <= col; j++) {
    //        if (word1[i - 1] == word2[j - 1]) {
    //            dp[i][j] = dp[i - 1][j - 1];
    //        }
    //        else {
    //            dp[i][j] = min(min(dp[i - 1][j - 1], dp[i][j - 1]), dp[i - 1][j]) + 1;
    //        }
    //    }
    //}
    //return dp[row][col];

    //优化空间为一维
    int row = word1.length();
    int col = word2.length();
    vector<int> dp(col+1);
    for (int i = 0; i <= col; i++) {
        dp[i] = i;
    }
    for (int i = 1; i <= row; i++) {
        int temp = dp[0];
        dp[0] = i;
        for (int j = 1; j <= col; j++) {
            int pre = temp;
            temp = dp[j];
            if (word1[i - 1] != word2[j - 1]) {
                dp[j] = min(min(dp[j - 1], pre), dp[j]) + 1;
            }
            else {
                dp[j] = pre;
            }
            
        }
    }
    return dp[col];
}
//int main() {
//    cout << minDistance("horse", "ros") << endl;
//	system("pause");
//	return 0;
//}