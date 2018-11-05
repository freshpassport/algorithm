# 第一个只出现一次的字符

> 在一个字符串(0<=字符串长度<=10000，全部由字母组成)中找到第一个只出现一次的字符,并返回它的位置, 如果没有则返回 -1（需要区分大小写）.

[题目来源](https://www.nowcoder.com/questionTerminal/1c82e8cf713b4bbeb2a5b31cf5b0417c?orderByHotValue=1&questionTypes=000100&mutiTagIds=579&page=1&onlyReference=false)

## 解释

分别用c++和c实现了这个算法；

c++用的是map，记录字符对应的次数；

c用的是数组，因为题目限定了字符只能是字母（假设是英文）。

