对，前两次给得偏快了。尤其“AcWing 语法课 → CSES”这个推荐太套路化，没有认真针对你的条件做筛选。

你这个条件应该重新定义成：

> 已有 Python 编程基础 + 中文 + 免费 + 目标算法竞赛 + 不想系统学工程 C++。

按这个标准，我现在会把路线收敛到很少几个材料，而且**完全不需要付费课**。

### 我最推荐的主线

**OI Wiki「C++ 语言基础」 → 洛谷官方入门题单 → OI Wiki 算法路线 + 洛谷官方算法题单 → Codeforces**

这套比“找一个 C++ 视频课从头看到尾”更适合你。

#### 1. C++：OI Wiki + 洛谷官方题单

主教材直接用 OI Wiki 的「语言基础」。

它不是普通 C++ 教程，而是明确面向 OI/ICPC 的，内容定位就是“程序是算法和数据结构的载体”。[OI Wiki](https://demo.oi-wiki.org/lang/?utm_source=chatgpt.com)

[OI Wiki 学习路线](https://oi-wiki.org/contest/roadmap/?utm_source=chatgpt.com)

你只需要按它的第一部分：

```
Hello World
↓
变量 / 类型 / 运算
↓
分支
↓
循环
↓
数组
↓
string
↓
结构体
↓
函数
↓
递归
↓
C++ 标准库
```

OI Wiki 自己的学习路线也是这样安排 C++ 入门的。[OI Wiki](https://demo.oi-wiki.org/contest/roadmap/?utm_source=chatgpt.com)

但是有一个关键点：

**不要只看 OI Wiki。**

每看一个知识点，马上做洛谷官方题单。

洛谷现在确实维护了一整套官方入门题单，不是用户随便建的：

```
#100 入门1：顺序结构
#101 入门2：分支结构
#102 入门3：循环结构
#103 入门4：数组
#104 入门5：字符串
#105 入门6：函数与结构体
```

总共大约 100 道左右，而且都是官方组织的。[洛谷](https://www.luogu.com.cn/training/list?__cf_chl_tk=2HRnVhpJyf7D7lS0FYw_eLO42S0ZcRWNIAqgcIif2Zs-1738448346-1.0.1.1-2SavXpJY7kap3XC8i4xuT1YnduJe6UL7l4fxictLKjk&page=1&type=official&utm_source=chatgpt.com)

[洛谷官方题单](https://www.luogu.com.cn/training/list?type=official&utm_source=chatgpt.com)

你已经会 Python，所以不用全部做。

实际执行：

```
OI Wiki 看「变量」
→ 洛谷 #100 选 3~5 题

OI Wiki 看「if」
→ 洛谷 #101 选 3~5 题

OI Wiki 看「循环」
→ #102 选 5 题

数组
→ #103 5~8题

字符串
→ #104 5~8题

函数/结构体
→ #105 5~8题
```

大概 **30～40 道题**，你就应该停止“C++ 基础学习”。

------

### 2. STL：这里才是 Python → C++ 最需要认真补的

然后单独看 OI Wiki 的 C++ 标准库部分。

[OI Wiki C++ 标准库](https://oi-wiki.org/lang/csl/?utm_source=chatgpt.com)

它专门解释了 STL 在算法竞赛中的作用，而且 NOI/ICPC 都允许使用 STL。[OI Wiki](https://oi-wiki.org/lang/csl/?utm_source=chatgpt.com)

重点只学：

```
vector
string

pair

sort
lower_bound / upper_bound
reverse
unique

stack
queue
priority_queue

set
multiset
map
unordered_map

迭代器
range-for
auto

lambda / 自定义排序
```

这里不用学：

```
智能指针
复杂模板
继承
虚函数
异常
RAII
多线程
工程项目结构
```

到这里，你的“竞赛 C++”第一阶段就结束了。

------

### 3. 算法：继续 OI Wiki + 洛谷，而不是换一堆课程

洛谷官方后面恰好已经把初级算法排好了：

```
#106 模拟与高精度
#107 排序
#108 暴力枚举
#109 递推与递归
#110 贪心
#111 二分查找与二分答案
#112 搜索

#113 线性表
#114 二叉树
#115 集合
#116 图的基本应用
#117 基础数学
```

这是洛谷目前官方维护的路线。[洛谷](https://www.luogu.com.cn/training/list?__cf_chl_tk=2HRnVhpJyf7D7lS0FYw_eLO42S0ZcRWNIAqgcIif2Zs-1738448346-1.0.1.1-2SavXpJY7kap3XC8i4xuT1YnduJe6UL7l4fxictLKjk&page=1&type=official&utm_source=chatgpt.com)

比如二分题单里直接就是：

```
普通二分
A-B 数对
砍树
木材加工
跳石头
数列分段
……
```

已经从普通二分过渡到了“二分答案”。[洛谷](https://www.luogu.com.cn/training/111?utm_source=chatgpt.com)

所以你的学习模式固定下来：

```
OI Wiki 看一个算法
        ↓
理解原理和复杂度
        ↓
自己写一次模板
        ↓
洛谷官方对应题单
        ↓
做 5~10 道
        ↓
下一个知识点
```

这实际上已经构成一个完整中文免费课程了。

------

### 4. 有知识点看 OI Wiki 看不懂怎么办？

这时我才推荐两个“辅助教材”，但都不是主线。

第一个是 **Hello 算法**。

[Hello 算法](https://www.hello-algo.com/?utm_source=chatgpt.com)

它是完全开源免费的中文教材，提供 C++ 实现，而且特点就是大量动画图解。[GitHub](https://github.com/krahets/hello-algo?utm_source=chatgpt.com)

适合拿来补：

```
复杂度
数组/链表
栈/队列
哈希
树
堆
图
搜索
排序
回溯
DP
贪心
```

但我**不建议拿它当算法竞赛主教材**。

因为它主要是“数据结构与算法基础”，不是 CP 教材。二分答案、前缀和/差分、并查集、树状数组、线段树、竞赛数论等体系还是 OI Wiki 更完整。

所以：

> OI Wiki 看不懂 → Hello 算法看图解 → 回 OI Wiki → 做题。

这是比较合理的用法。

第二个是 **代码随想录**。

它的算法正文、图文和视频都是免费开放的，目前路线包括数组、哈希、双指针、栈队列、树、回溯、贪心、DP、单调栈、图论。[程序员Carl](https://programmercarl.com/about/?utm_source=chatgpt.com)

[代码随想录](https://programmercarl.com/?utm_source=chatgpt.com)

它尤其适合：

> “这个算法 OI Wiki 写得太像百科全书，我第一次学看不懂。”

但同样不要从头到尾把它刷成 LeetCode 路线。

------

### 5. 为什么我不再推荐你先看一个完整中文 C++ 视频课

我认真看了一圈以后，反而认为**没有必要**。

例如西安交大目前有国家精品在线开放课程《计算机程序设计（C++）》，本身是很正规的大学课。[网易云课堂](https://www.icourse163.org/course/XTJU-46006)

问题不是它不好，而是它会系统讲：

> 面向过程 → 面向对象 → 完整 C++ 程序设计

而你需要的是：

> 能用 C++ 写算法 → STL → 算法。

两者目标不一样。

你有 Python 基础，再去跟一个 20 周 C++ 零基础大学课，会把大量时间用在你当前根本不需要的地方。

所以我甚至**不建议你专门找“LearnCpp 的中文版替代品”**。

这本身就是之前路线的问题。

------

### 最终我会让你只收藏这 4 个东西

| 用途                     | 材料         |
| ------------------------ | ------------ |
| **主知识库**             | OI Wiki      |
| **主练习平台**           | 洛谷官方题单 |
| **看不懂时的图解教材**   | Hello 算法   |
| **看不懂时的另一种讲法** | 代码随想录   |

然后严格走：

```
① OI Wiki：C++基础
   +
   洛谷 #100~#105（挑着做）
             ↓
② OI Wiki：STL
             ↓
=========== C++学习结束 ===========

③ OI Wiki：基础算法
   +
   洛谷 #106~#117
             ↓
④ OI Wiki：
   前缀和 / 差分
   双指针
   BFS / DFS
   DP
   图论
   并查集
   堆
   最短路
   MST
   Fenwick
   Segment Tree
             ↓
⑤ 洛谷对应题单练习
             ↓
⑥ Codeforces Div.4 → Div.3
```

其中 **Hello 算法和代码随想录都只是遇到看不懂的知识点才打开**。

这才是我目前认为最适合你的方案：**0 元，中文，而且核心材料全部是公开长期维护的项目/官方题库。**

至于 AcWing，我会把我之前的建议收回：**你完全没必要为了这条路线付费。**