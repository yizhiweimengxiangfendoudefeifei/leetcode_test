#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//最多2笔交易
//int maxProfit(vector<int>& prices) {
//    int len = prices.size();
//    int buy1 = -prices[0], sell1 = 0, buy2 = -prices[0], sell2 = 0;
//    for (int i = 1; i < len; i++) {
//        buy1 = max(buy1, -prices[i]);
//        sell1 = max(sell1, buy1 + prices[i]);
//        buy2 = max(buy2, sell1 - prices[i]);
//        sell2 = max(sell2, buy2 + prices[i]);
//    }
//    return sell2;
//}
//int main() {
//	vector<int> price = { 2,4,1 };
//	cout << maxProfit(price) << endl;
//
//	system("pause");
//	return 0;
//}