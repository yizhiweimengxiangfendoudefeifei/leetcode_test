# leetcode_test
This is leetcode exercises, something about my conclusions. I am pushing my proj.
# 01two-sum
vector直接使用大括号初始化，vector<int> nums = { 10,7,2,15 };  
return {}；返回vector<int>
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
  利用vector<vector<int>>定义了一个包含vector的容器vector，定义一个数组，数组中每个元素初始化为0。[二维数组网址](https://www.jianshu.com/p/2524c34511f3)  
  在优化空间时使用了vector容器，要注意vector容器如果没有初始化多少时不能直接取出。初始化vector<int> dp(n);  
## 4.4 最小路径和  
  在一个方格图中计算最小的路径上的和，但是只能向下或者向右走。   
  注意算法min的使用  
  [二维数组初始化的方法vector<vector<int>> dp={{}};](https://blog.csdn.net/sinat_41852207/article/details/86668954)  
## 4.5编辑距离
  给你两个单词 word1 和 word2， 请返回将 word1 转换成 word2 所使用的最少操作数。  “horse”“ros”  
  二维动态规划问题，将其写成二维数组进行动态规划，存储动态规划的节点。tips：动态规划矩阵和字符串的索引不一致！ 
## 4.6不同障碍物  
  路径上可能存在障碍物，存在障碍物时grip[i][j]=1，判断是否存在障碍物然后再决定是否赋值。  
## 4.7股票买卖  
  4.72是不计交易次数  
  4.73限定最多两笔交易  
  4.74设定有k笔交易  
# 05二分法  
## 5.0搜索旋转排序数组  
  非有序的数组，部分有序的数组也是可以用二分法的。这道题是非有序数组，但是是由两部分有序的数组组成的，二分的时候需要先判断要找的值在中值的左边还是在右边，判断的方法是：判断数组的第一个元素<=num[mid]，即左边有序，再判断要找的值在不在有序的左边。同理计算下去....    
  也要熟悉find函数返回的是迭代器，sort函数也可以用于vector容器。qsort函数不能用于哪些容器？ 
## 5.1二维有序数组的查找  
   这道题不难，是求有序排列的二维数组中是否包含某个数，写在这里的主要原因是看他的优化方法。  
# 06贪心算法（贪婪）  
## 概念  
  定义：贪心算法在对问题求解时，每次都是选择最好的或者是最优的选择，从而希望能够导致结果是最好的或者最优的选择。每次找到的结果都是局部最优解。       
  过程：1）首先找到所有过程的最优解  2）将最优解保存下来，在剩下的集合中去掉最优解。  3）重复第一步直到覆盖了所有的最优解。
## 6.1贪心算法孩子吃饼干  
  饼干数量大于等于孩子的饥饿度的时候，可以选择吃饼干。  
  这里要注意数组的引用传递问题。同时要注意这个++写法children[child] <= cookies[cook++]    
## 6.2无重叠区间  
  求所有的没有重叠的区间有多少个，贪心算法是指按顺序排列后前一个保存的二维数组的第二个数小于等于下一个二维数组的第一个数  
  这里要注意如何对比二维数组的第二个数的大小（sort中的compare的写法），代码里也写了正常的对比方法：
  ```
  [](const auto& arr1, const auto& arr2) {  
        return arr1[1] < arr2[1];  
    }  
  ```
# 07[广度优先搜索](https://github.com/yizhiweimengxiangfendoudefeifei/leetcode_test/tree/main/bfsdfs)          
# [08二叉树](https://github.com/yizhiweimengxiangfendoudefeifei/leetcode_test/tree/main/binary_tree)   
# 9 递归  
递归适用于那些能把大问题拆解为几个子问题的。  
                              
                                                                                                                                          
                                                                                                                                          
  

