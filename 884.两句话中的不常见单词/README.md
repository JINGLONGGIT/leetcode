# 884.两句话中的不常见单词

## 哈希
* 算法思路
    * 因为两个字符串的每个单词之间都有空格，所以可以利用空格将两个字符串分割成不同的单词  
    * 将两个字符串中分割出的单词都放入哈希表 `map<单词，出现次数>` 中，最后在哈希表中找到出现次数为1的单词
    * 可以利用 `substr` 来完成字符串的分割

