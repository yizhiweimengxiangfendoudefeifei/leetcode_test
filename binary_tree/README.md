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