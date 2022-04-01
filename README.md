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
#  04动态规划  
## 概念：  
  定义：把原问题分解成若干子问题进行求解。  
  三要素：  1）问题的阶段 2）每个阶段的状态 3）从前一个阶段转换到后一个阶段之间的递推关系  
## 4.1最大子数组和    
  学会新特性中的遍历方法，auto& x:nums;  
## 4.2爬楼梯问题  
  这是个找规律的问题。先写出数组dp[]，再写出递推关系，最后给出n=0,1,2时候的初值。  

