# leetcode_test
This is leetcode exercises, something about my conclusions. I am pushing my proj.
# 01two-sum
vector直接使用大括号初始化，vector<int> nums = { 10,7,2,15 };  
return {i,j}；返回vector<int>
# 02交替位二进制数  
  掌握十进制转换为二进制的方法：for循环和递归的方法  
  也可以用模拟的方法实现
  ```
  bool hasAlternatingBits(int n) {  
        int prev = 2;  
        while (n != 0) {  
            int cur = n % 2;  
            if (cur == prev) {  
                return false;  
            }  
            prev = cur;  
            n /= 2;  
        }  
        return true;  
    }  
  ```

