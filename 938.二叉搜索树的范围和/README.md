# 938.二叉搜索树的范围和


## 深度优先遍历
* 算法思路：找出二叉搜索树中所有大于 `L` 和小于 `R` 的值，并求和。
* 递归出口
    * 当节点为 `NULL` 时返回0
    * 当 `root.val` 小于 `L` 时，返回右子树之和
    * 当 `root.val` 大于 `R` 时，返回左子树之和
    * 当节点小于 `L` 大于 `R` 时，返回 `当前节点 + 左子树之和 + 右子树之和`

