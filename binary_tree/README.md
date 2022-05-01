# 二叉树  
## 1.求树的最大深度  
本体主要是使用递归的思想。  
## 2.从前序和中序遍历序列构造二叉树  
这道题主要是找到前序中的根节点，然后利用存储的map中的值找到中序遍历中根节点。然后确定前序和中序的左右子树，利用左右子树递归实现二叉树。  
![image](https://user-images.githubusercontent.com/39455551/165087395-9c67c267-0f10-4a46-ab0b-b377bd2e61e0.png)  
思路：  
<img src="https://user-images.githubusercontent.com/39455551/165094225-6990ca83-183d-46b7-b0c8-d2c6da24a21e.png" width="500">  

## 3.恢复二叉搜索树  
整体思路是：先遍历所有的节点得到数值，使用vector容器保存所有的数据，然后进行排序得到v2，将v2和v容器中的数据对比得到不同的那两个数据。然后遍历直到找到这两个错误放置的数据，交换他们的位置即可。  
下边是这个例题题目：  
![image](https://user-images.githubusercontent.com/39455551/165429082-5b0f8ccd-38a1-44d8-b524-73647b5b1915.png)  
## 4.不同的二叉搜索树  
这是一道数学模型题，利用的是  模型。  
![image](https://user-images.githubusercontent.com/39455551/165434838-2606c09c-75ed-4ebd-8307-db2bad2fd6ab.png)  
## 5.不同的二叉搜索树2  
这道题是上一道题的拓展，需要输出二叉树的结构。没太看懂，需要再看一下。  
![image](https://user-images.githubusercontent.com/39455551/165664047-3eba06ba-4780-4595-b1d5-3cadccf1c991.png)  
## 6.二叉树展开为链表  
主要思路：前序遍历存储树状结构，循环遍历将左指针指向空，右指针指向下一个节点。  
![image](https://user-images.githubusercontent.com/39455551/165670157-435c8bc4-4ab5-4511-bf4d-3a7e8a7e7a93.png)  
## 7.平衡二叉树  
主要思路：递归遍历二叉树的每个结点的深度。  
![image](https://user-images.githubusercontent.com/39455551/165937292-0b5aef9b-f8c4-4fbb-a629-6558988cc7bc.png)  
## 8.求根节点到叶节点数字之和  
思路：利用递归计算根节点到叶子的数字之和。计算十位以上的数字可以乘以10进行计算。  
![image](https://user-images.githubusercontent.com/39455551/165973535-8c9577c2-3a21-4716-b4fb-7c80af79e779.png)  
## 9.求二叉树的最大路径和  
[大神总结的二叉树遍历的两种方法](https://leetcode-cn.com/problems/path-sum-ii/solution/yi-pian-wen-zhang-jie-jue-suo-you-er-cha-oo63/)  
思路：利用两重递归来更新全局变量res的值。因为这里有负数，故需要初始化res为INT_MIN。  
![image](https://user-images.githubusercontent.com/39455551/166130356-4dc45657-1b88-4709-ae5e-3420eb213fd0.png)






