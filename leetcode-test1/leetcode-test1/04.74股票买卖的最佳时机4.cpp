#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



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