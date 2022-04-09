#include<iostream>
#include<vector>
using namespace std;

int maxProfit(int k, vector<int>& prices) {
    int m = prices.size();
    //定义一个dp
    vector<vector<int>> dp(m, vector<int>(m));
    for (int i = 0; i < m; i++) {
        dp[i][0] = 0;
    }
    for (int j = 0; j < m; j++) {
        for (int i = j + 1; i < m; i++) {
            if ((prices[i] - prices[i - 1]) > 0) {
                dp[j][i] = prices[i] - prices[i - 1] + dp[j][i - 1];
            }
            else {
                dp[j][i] = dp[j][i - 1];
            }
        }

    }
    int maxr = dp[0][m-1];
    for (int i = 0; i < m; i++) {

        if (dp[i][m-1] > maxr) {
            maxr = dp[i][m-1];
        }
    }

    return maxr;

}

//int main() {
//    vector<int> price = { 2,4,1 };
//	cout << maxProfit(2, price) << endl;
//	system("pause");
//	return 0;
//}