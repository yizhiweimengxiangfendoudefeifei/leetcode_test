# 这是一个有关链表的题目记录  
## 1.  

## 2.  

## 3.  
## 4.[两两交换链表中的节点](https://leetcode.cn/problems/swap-nodes-in-pairs/)  
题解：基本的交换方法还是最简单的链表交换方法，即从顶点到最后一个链表进行交换。在这里进行的是选择区间交换[a,b)。  
使用递归进行交换的思想。要确定不同节点之间的连接关系。  
![image](https://user-images.githubusercontent.com/39455551/168194024-914ee551-5a4c-4238-adc8-12526d5e2d29.png)
## 5.[环形链表](https://leetcode.cn/problems/linked-list-cycle/)  
题解：哈希容器比较好想，遍历整个链表，只要发现遍历过的元素出现在哈希表中就返回真，否则返回假。  
第二种解法是双指针，快慢指针，如果快指针能够追上慢指针则证明存在环。  
![image](https://user-images.githubusercontent.com/39455551/168416432-814b9faf-37a8-4874-a186-e42a226b3c2e.png)

