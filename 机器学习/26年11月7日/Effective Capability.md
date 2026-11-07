我们可以把模型能力粗略拆成两个因素：

\[ \text{Effective Capability} = \text{Potential}\times\text{Accessibility} \]

这里不是一个可直接测量的数学等式，而是一种分析框架。

- Potential：模型参数中已经形成了哪些可组合的计算结构。
- Accessibility：训练后的策略能否在适当问题上稳定利用这些结构。

预训练主要影响前者，后训练通常强烈影响后者，但两者都可以互相影响。

更进一步，我认为可以提出一个问题：

> **我们究竟应该用什么指标区分「模型学会了新能力」与「模型更善于调用已有能力」？**

仅仅比较 Pass@1 和 Pass@k 还不足够，因为模型可能学到了更长的搜索策略，也可能改变了生成分布，而没有真正掌握新的可组合算法。

这个问题直接关系到 RLVR、test-time scaling 以及 reasoning model 的能力来源。