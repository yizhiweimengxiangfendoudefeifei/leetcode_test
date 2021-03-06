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
## 10.最长同值路径  
思路：和9是相同类型问题，注意当左节点存在且根节点的值等于左节点的值时左值加1，否则左值为0.右节点同理。num取num和左值加右值值中较大的那个。  
![image](https://user-images.githubusercontent.com/39455551/166137197-93d2a050-c223-41b8-a7ee-869b24f17774.png)
## 11.二叉树的直径  
思路：需要拿出全局变量num来存储，num = max(num, left + right);，遍历每个结点对比取出最大值num。  
![image](https://user-images.githubusercontent.com/39455551/166206509-8574331c-b41d-4c2e-818c-2eb73c44039e.png)  
## 12.二叉树的所有路径  
注意：[to_string()](http://cplusplus.com/reference/string/to_string/?kw=to_string) 将其他类型转换为string类型  
每到一次叶子节点就把本条路径的所有string放到准备好的容器中。利用左右递归完成。  
![image](https://user-images.githubusercontent.com/39455551/166246852-e52ac859-5aac-4f1e-b69e-148def1b061c.png)  
## 13.[打家劫舍3](https://leetcode-cn.com/problems/house-robber-iii/)  
如果不使用无序的map容器存储会好理解一点。  
首选时递归，后续遍历。  
其实这题的主要思路是记录选择或者不选择两种情况。如果根节点选择，那么相邻的节点就不再选择，再选择的就是下下个结点。  
选择的是本节点的值加上左子叶和右子叶中不选择的值。  
不选择的是左子叶中最大的值加上右子叶中最大的值。 
![image](https://user-images.githubusercontent.com/39455551/167246282-2bf544c0-e3d5-4ed5-9347-4f89cc116ea1.png)

## 14.验证二叉树是否相等  
主要思路：利用最小和最大节点记录，主要是做左右递归对比二叉树是否相等。 
总结二叉搜索树的一般思路：  
1. 找到当前节点要做的事情，其他的事交给递归。  
2. 如果需要对比整个二叉树，可以增加参数传递。  
3. 总结框架如下。  
总结针对BST的遍历框架：  
```
void BST(TreeNode* root, int target){
  if(root->val == target){
    //do
  }
  if(root->val < target){
    BST（root->right, target）;
  }
  if(root->val > target){
    BST（root->left, target）;
  }
}
```
![image](https://user-images.githubusercontent.com/39455551/166960207-913b5b04-b807-4632-8c47-d3371a15d916.png)
## 15.二叉搜索树的插入操作  
思路：递归插入节点到最后。  
![image](https://user-images.githubusercontent.com/39455551/166960382-a2249a31-8efa-4caf-ac34-021642d6502e.png) 
## 16.[所有大于等于节点的值之和](https://leetcode.cn/problems/w6cpku/) 
问题：当树里边存在负数的时候结果不正确。  










