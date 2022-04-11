#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxProfit(int k, vector<int>& prices) {
    //int m = prices.size();

    ////k = min(k, m / 2);
    //int res = 0;
    //if (m == 0) {
    //    return 0;
    //}
    //int k1 = 0;//买卖股票的次数
    //vector<int> dp(m, 0);
    //for (int i = 1; i < m; i++) {
    //    if (prices[i] - prices[i - 1] > 0) {
    //        dp[i] = prices[i] - prices[i - 1] + dp[i - 1];
    //        k1++;
    //    }
    //    else {
    //        dp[i] = dp[i - 1];
    //    }
    //}
    //
    //if (k1 == k) {
    //    return dp[m - 1];
    //}
    //else{
    //    vector<int> dp1;
    //    for (int i = 1; i < m; i++) {
    //        if (dp[i] - dp[i - 1] > 0) {
    //            int add_price = dp[i] - dp[i - 1];
    //            dp1.push_back(add_price);
    //        }
    //    }
    //    
    //    sort(dp1.begin(), dp1.end());
    //    
    //    for (int i = 0; i < min(k,k1); i++) {

    //        res += dp1[k1 - i - 1];
    //    }
    //    return res;
    //}

    if (prices.empty()) {
        return 0;
    }

    int n = prices.size();
    k = min(k, n / 2);
    vector<vector<int>> buy(n, vector<int>(k + 1));
    vector<vector<int>> sell(n, vector<int>(k + 1));


    buy[0][0] = -prices[0];
    sell[0][0] = 0;
    for (int i = 1; i <= k; ++i) {
        buy[0][i] = sell[0][i] = INT_MIN / 2;
    }

    for (int i = 1; i < n; ++i) {
        buy[i][0] = max(buy[i - 1][0], sell[i - 1][0] - prices[i]);
        for (int j = 1; j <= k; ++j) {
            buy[i][j] = max(buy[i - 1][j], sell[i - 1][j] - prices[i]);
            sell[i][j] = max(sell[i - 1][j], buy[i - 1][j - 1] + prices[i]);
        }
    }

    return *max_element(sell[n - 1].begin(), sell[n - 1].end());
}


int maxProfit1(int k, vector<int>&prices) {
    if (prices.size() == 0 || k == 0) return 0;
    vector<int> buy(k);
    vector<int> sell(k);
    buy[0] = -prices[0];
    for (int i = 1; i < prices.size(); i++) {
        buy[0] = max(buy[0], -prices[i]);
        sell[0] = max(sell[0], buy[0] + prices[i]);
        for (int j = 1; j < k; j++) {
            buy[j] = max(buy[j], sell[j - 1] - prices[i]);
            sell[j] = max(sell[j], buy[j] + prices[i]);
        }
    }
    return sell[k - 1];
}

//int main() {
//    vector<int> price = { 2,4,1 };
//	cout << maxProfit1(2, price) << endl;
//    
//	system("pause");
//	return 0;
//}