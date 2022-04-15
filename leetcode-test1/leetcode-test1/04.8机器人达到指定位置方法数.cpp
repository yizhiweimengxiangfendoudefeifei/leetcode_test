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
//    //�������� 5 2 3 3
//
//    /*�������ų�һ�е�N��λ�ã���Ϊ1~N����ʼʱ��������Mλ�ã������˿���������������ߣ������������1λ�ã�
//    ��ô��һ��������ֻ���ߵ�2λ�ã������������Nλ�ã���ô��һ��������ֻ���ߵ�N - 1λ�á��涨������ֻ����k����
//    ����������Pλ�õķ����ж����֡����ڷ��������ܱȽϴ����Դ���Ҫ��1e9 + 7ȡģ*/
//    int n, m, k, p;
//    cin >> n >> m >> k >> p;
//
//    sum(n, m, k, p);
//    system("pause");
//    return 0;
//
//}