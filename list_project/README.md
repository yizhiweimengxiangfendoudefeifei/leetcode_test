# 这是一个有关链表的题目记录  
## 1.[删除链表中重复元素2](https://leetcode.cn/problems/remove-duplicates-from-sorted-list-ii/)    
思路：找到相等的元素int x = cur->next->val;在while中循环，只要下一个值存在并且下一个值等于x就让链表指向下下一个元素，delete掉下个元素。  
![image](https://user-images.githubusercontent.com/39455551/169730561-8ea9b908-ea28-4a14-a451-2e99dbccab7f.png)


## 2.[反转链表1](https://leetcode.cn/problems/reverse-linked-list/)  
题解：掌握两种方法，递归和遍历。
![image](https://user-images.githubusercontent.com/39455551/169729932-1fa3d05d-b594-483f-8ef9-f4b2a0278db0.png)


## 3.[反转链表2]()  
题解：利用2反转链表中的递归解法，只不过是返回固定区间的反转链表。因此需要记录下后继节点，将head->next = successor;指向后继节点。  
![image](https://user-images.githubusercontent.com/39455551/168942041-ecdaceda-9fce-4fa7-abce-5a0597ec6f67.png)

## 4.[两两交换链表中的节点](https://leetcode.cn/problems/swap-nodes-in-pairs/)  
题解：基本的交换方法还是最简单的链表交换方法，即从顶点到最后一个链表进行交换。在这里进行的是选择区间交换[a,b)。  
使用递归进行交换的思想。要确定不同节点之间的连接关系。  
![image](https://user-images.githubusercontent.com/39455551/168194024-914ee551-5a4c-4238-adc8-12526d5e2d29.png)
## 5.[环形链表](https://leetcode.cn/problems/linked-list-cycle/)  
题解：哈希容器比较好想，遍历整个链表，只要发现遍历过的元素出现在哈希表中就返回真，否则返回假。  
第二种解法是双指针，快慢指针，如果快指针能够追上慢指针则证明存在环。  
![image](https://user-images.githubusercontent.com/39455551/168416432-814b9faf-37a8-4874-a186-e42a226b3c2e.png)
## 6.[两数相加](https://leetcode.cn/problems/add-two-numbers/)   
说明：2->next = 3;将2的指针指向3  
3 = 2->next;将2的下一个指针的值改变为3  
root = root->nest;将链表一直移动下去  
思路：这道题主要是要新建一个链表root用来返回，新建一个cursor等于root用来一直向下指，利用全局变量carry记录是否进位，利用sumVal%10记录每一位的数字用node来接收，同时将cursor的下一个指针指向node，将cursor=node进行移动。while循环结束的条件是l1不为空或l2不为空或carry不为0（还有进位发生）。  
![image](https://user-images.githubusercontent.com/39455551/168940165-0a5f8418-2770-490d-a3fc-f2db2a64fa33.png)
## 7.[旋转链表](https://leetcode.cn/problems/rotate-list/)  
思路：将链表转换为循环链表cur->next = head;  
主要是找到新的开始节点，开始节点的上一个节点即为结束节点，将结束节点的下一个节点置为空。  
找到开始节点的主要思路是：k %= count; 在count - k中循环  
![image](https://user-images.githubusercontent.com/39455551/169677138-07f7ffbe-6e4c-47e5-8231-d21f61e6b44e.png)
## 8.[奇偶链表](https://leetcode.cn/problems/odd-even-linked-list/)  
思路：这道题比较简单，但是注意简化代码，提高代码的阅读性，之前自己写的代码过于复杂，不够简洁。  
![image](https://user-images.githubusercontent.com/39455551/169677181-15050545-a4a4-4abb-9781-4ecc38a13235.png)


