## 将数组分成和相等的三个部分

* 算法思路
    * 将数组 `A` 中的所有元素求和得到 `SUM(A)`，根据题目要求可以得知，对于每一个非空部分的和都应当是 `SUM(A) / 3`。因此我们只需要找到索引 `i` 和 `j` 满足条件：
        * `A[0] + A[1] + ... + A[i] = SUM(A) / 3`
        * `A[i + 1] + A[i + 2] + ... + A[j] = SUM(A) / 3`。这等价于 `A[0] + A[1] + A[2] + ... + A[j] = SUM(a) / 3 * 2`，且 `j > i`  
    * 首先我们需要找出索引 `i` 。具体地，我们从第一个元素开始遍历数组 `A` 并对数组中的元素进行累加。当累加到的和等于`SUM(A) / 3`时，我们就将当前位置索引为`i`。
    * 找出索引`i`之后，我们从`i + 1`开始继续遍历数组进行累加，当累加和等于`SUM(A) / 3 * 2`时，我们就可以得到索引`j`，此时就可以返回`true`。当无法找到索引`i`或者索引`j`，或者`SUM(A)`本身无法被3整除，返回`false`