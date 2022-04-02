#include<iostream>
#include<vector>
using namespace std;

int minPathSum(vector<vector<int>>& grid) {
	int col = grid[0].size();
	int row = grid.size();
	vector<vector<int>> dp(row, vector<int>(col));
	
	dp[0][0] = grid[0][0];
	//给第一行赋值
	for (int i = 1; i < col; i++) {
		dp[0][i] = dp[0][i - 1] + grid[0][i];
	}
	//给第一列赋值
	for (int i = 1; i < row; i++) {
		dp[i][0] = dp[i - 1][0] + grid[i][0];
	}
	for (int i = 1; i < row; i++) {
		for (int j = 1; j < col; j++) {
			dp[i][j] = min(dp[i][j - 1], dp[i - 1][j]) + grid[i][j];
			/*if (dp[i][j - 1] + grid[i][j] < dp[i - 1][j] + grid[i][j]) {
				dp[i][j] = dp[i][j - 1] + grid[i][j];
			}
			else {
				dp[i][j] = dp[i - 1][j] + grid[i][j];
			}*/
		}
	}
	return dp[row - 1][col - 1];
	
}

int main() {
	vector<vector<int>> grid = { {1,3,1} ,{1,5,1},{4,2,1} };
	cout << minPathSum(grid) << endl;
	system("pause");
	return 0;
}