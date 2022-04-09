#include<iostream>
#include<vector>
using namespace std;

int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
	int m = obstacleGrid.size();//行
	int n = obstacleGrid[0].size();//列
	vector<vector<int>> dp(m, vector<int>(n));

	//第一行赋值
	for (int i = 0; i < n; i++) {
		if (obstacleGrid[0][i] == 0) {
			dp[0][i] = 1;
		}
		else {
			for (int j = i; j < n; j++) {
				dp[0][j] = 0;
			}
			break;
		}
	}
	//第一列赋值
	for (int i = 0; i < m; i++) {
		if (obstacleGrid[i][0] == 0) {
			//无障碍物
			dp[i][0] = 1;
		}
		else {
			for (int j = i; j < m; j++) {
				dp[j][0] = 0;
			}
			break;
		}
	}
	for (int i = 1; i < m; i++) {
		for (int j = 1; j < n; j++) {
			if (obstacleGrid[i][j] == 0) {
				//无障碍物
				dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
			}
			else {
				//有障碍物
				dp[i][j] = 0;
			}
		}
	}
	return dp[m - 1][n - 1];
}

//int main() {
//	vector<vector<int>> obstacleGrid = { {0,0,0},{0,1,0},{0,0,0} };
//	cout << uniquePathsWithObstacles(obstacleGrid) << endl;
//	system("pause");
//	return 0;
//}