# 136.只出现一次的数字

> 题目要求：时间复杂度O(N)，空间复杂度O(1)  

## 排序 + 双指针
* 算法思路：先对整个数组进行排序，然后定义两个指针分别指向数组的前后相邻两个元素，如果元素相同，则指针同时向后移动两个位置；如果不同则说明该指针指向的就是目标值。
* 时间复杂度：O(NlogN) 时间复杂度不符合要求


## 异或
* 算法思路
    * 任何数字异或其自身为零 `a xor a = 0`
    * 任何数字与零异或等于其自身 `a xor 0 = a`
    * 异或运算与顺序无关 `a xor b = b xor a, a xor b xor a = a xor a xor b = b`


* 复杂度分析
    * 时间复杂度 O(N)
    * 空间复杂度 O(1)