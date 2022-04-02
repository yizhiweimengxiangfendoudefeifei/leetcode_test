#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

//这是我自己写的动态规划，感觉时间复杂度是(1+n)*n/2
//int maxSubArray(vector<int>& nums) {
//
//    int row = nums.size();
//    int col = nums.size();
//    int total[10][10] = {0};
//    int dp[10] = {0};
//    if (row == 1) {
//        return nums[0];
//    }
//    else {
//        for (int i = 0; i < nums.size(); i++) {
//            for (int j = i + 1; j < nums.size(); j++) {
//                //total[i][0] = nums[0];
//
//                total[0][0] = nums[0];
//                total[i][j] = total[i][j - 1] + nums[j];
//            }
//            dp[i] = dp[0];
//            for (int k = 0; k < col; k++) {
//                if (total[i][k] > dp[i]) {
//                    dp[i] = total[i][k];
//                }
//            }
//        }
//        int max_nums = dp[0];
//        for (int i = 0; i < row; i++) {
//
//            if (dp[i] > max_nums) {
//                max_nums = dp[i];
//            }
//        }
//        return max_nums;
//    }
//    
//}

//这是别人的答案，时间复杂度是n
int maxSubArray(vector<int>& nums) {
    int pre = 0, dp = nums[0];
    for (auto& x : nums) {
        pre = max(pre + x, x);
        dp = max(pre, dp);
    }
    return dp;
}

//int main() {
//    vector<int> nums = { -2,1,-3,4,-1,2,1,-5,4 };
//    cout << maxSubArray(nums);
//    system("pause");
//    return 0;
//}