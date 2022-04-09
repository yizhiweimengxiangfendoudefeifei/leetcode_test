#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//函数的方法实现
//int search(vector<int>& nums, int target) {
//    int len = nums.size();
//    //sort(nums.begin(),nums.end());
//    auto ite = find(nums.begin(), nums.end(), target);
//    if (ite != nums.end()) {
//        for (int i = 0; i < len; i++) {
//            if (*ite == nums[i]) {
//                return i;
//            }
//        }
//    }
//    return -1;
//}

//二分法实现
int search(vector<int>& nums, int target) {
    int n = (int)nums.size();
    if (!n) {
        return -1;
    }
    if (n == 1) {
        return nums[0] == target ? 0 : -1;
    }
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (nums[mid] == target) return mid;
        if (nums[0] <= nums[mid]) {
            if (nums[0] <= target && target < nums[mid]) {
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        else {
            if (nums[mid] < target && target <= nums[n - 1]) {
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {4,5,6,7,0,1,2};//为什么不能用引用？
    cout << search(nums, 0);
    system("pause");
    return 0;
}