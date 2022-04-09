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
  三个步骤：1) 写出数组dp 2) 写出每个状态的转移关系 3） 写出初值  
## 4.1最大子数组和    
  学会新特性中的遍历方法，auto& x:nums;  
## 4.2爬楼梯问题  
  这是个找规律的问题。先写出数组dp[]，再写出递推关系，最后给出n=0,1,2时候的初值。  
  注意两种定义方法：  
  int* p = new int(10);定义一个指针指向int类型10  
  int* p = new int[10];定义一个长度为10的数组指向指针p  
## 4.3 不同路径
  利用vector<vector<int>>定义了一个包含vector的容器vector，定义一个数组。[二维数组网址](https://www.jianshu.com/p/2524c34511f3)  
  在优化空间时使用了vector容器，要注意vector容器如果没有初始化多少时不能直接取出。初始化vector<int> dp(n);  
## 4.4 最小路径和  
  在一个方格图中计算最小的路径上的和，但是只能向下或者向右走。   
  注意算法min的使用  
  [二维数组初始化的方法vector<vector<int>> dp={{}};](https://blog.csdn.net/sinat_41852207/article/details/86668954)  
## 4.5编辑距离
  给你两个单词 word1 和 word2， 请返回将 word1 转换成 word2 所使用的最少操作数。  “horse”“ros”  
  二维动态规划问题，将其写成二维数组进行动态规划，存储动态规划的节点。tips：动态规划矩阵和字符串的索引不一致！  
# 05二分法  
## 5.0搜索旋转排序数组  
  非有序的数组，部分有序的数组也是可以用二分法的。这道题是非有序数组，但是是由两部分有序的数组组成的，二分的时候需要先判断要找的值在中值的左边还是在右边，判断的方法是：判断数组的第一个元素<=num[mid]，即左边有序，再判断要找的值在不在有序的左边。同理计算下去....    
  也要熟悉find函数返回的是迭代器，sort函数也可以用于vector容器。qsort函数不能用于哪些容器？  
  

