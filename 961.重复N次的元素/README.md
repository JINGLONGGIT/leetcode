# 961.重复N次的元素

## map哈希
* 算法思路
> 遍历整个数组，将所有数组元素放入到哈希表 `map<值，出现次数>` 中，然后在哈希表中寻找出现次数为 `N/2` 的那个元素即可


## set哈希
* 算法思路
    * 数组大小为 `2N`，其中某一个元素重复了 `N` 次，那么说明其他元素的出现次数都为1，则只需要找到数组中出现次数不为1的那个元素即可
    * 利用 `set` 来寻找数组中出现的重复元素


## 排序
* 算法思路
> 对数组进行排序，如果重复的元素是数组中最小的元素，即数组左半边元素相同，返回`A[0]`；如果重复的元素不是数组中的最小元素，直接返回 `A[N / 2]`