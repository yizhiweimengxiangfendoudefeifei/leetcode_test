#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int mod = 1e9 + 7;
void sum(int& n, int& m, int& k, int& p) {

    vector<int> dp(n + 2, 0);
    vector<int> dp1(n + 2, 0);

    dp1[m] = 1;
    for (int step = 0; step < k; step++) {
        for (int i = 1; i <= n; i++) {
            dp[i] = (dp1[i - 1] + dp1[i + 1]) % mod;
        }
        for (int j = 1; j <= n; j++) {
            dp1[j] = dp[j];
        }
    }

    cout << dp[p];
}
//int main() {
//
//    //测试用例 5 2 3 3
//
//    /*假设有排成一行的N个位置，记为1~N，开始时机器人在M位置，机器人可以往左或者往右走，如果机器人在1位置，
//    那么下一步机器人只能走到2位置，如果机器人在N位置，那么下一步机器人只能走到N - 1位置。规定机器人只能走k步，
//    最终能来到P位置的方法有多少种。由于方案数可能比较大，所以答案需要对1e9 + 7取模*/
//    int n, m, k, p;
//    cin >> n >> m >> k >> p;
//
//    sum(n, m, k, p);
//    system("pause");
//    return 0;
//
//}