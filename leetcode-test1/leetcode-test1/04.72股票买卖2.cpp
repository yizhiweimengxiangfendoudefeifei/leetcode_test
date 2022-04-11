#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//不计交易次数
int maxProfit(vector<int>& prices) {
    int len = prices.size();
    //int dp[len][2];
    vector<vector<int>> dp(len, vector<int>(2));
    dp[0][0] = 0, dp[0][1] = -prices[0];
    for (int i = 1; i < len; i++) {
        //没有股票
        dp[i][0] = max(dp[i - 1][1] + prices[i], dp[i - 1][0]);
        //有股票
        dp[i][1] = max(dp[i - 1][0] - prices[i], dp[i - 1][1]);
    }
    return dp[len - 1][0];
}



int main() {
	vector<int> price = { 2,4,1 };
	cout << maxProfit(price) << endl;

	system("pause");
	return 0;
}