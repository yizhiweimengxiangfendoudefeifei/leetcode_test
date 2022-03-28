#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    //return i, j;
                    return { i,j };
                }
            }
        }
        return {};

    }
};

ostream& operator<<(ostream& cout,vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout <<v[i];
    }
    cout << endl;
    return cout;
}
int main() {
    vector<int> nums = { 10,7,2,15 };
    Solution s;
    cout << s.twoSum(nums, 9);
	system("pause");
	return 0;
}