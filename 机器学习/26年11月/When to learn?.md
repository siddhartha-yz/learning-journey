我们习惯从最终参数 \(\theta\) 的角度理解训练。

但实际上，优化过程具有路径依赖：

\[ \theta_{\text{final}} = \operatorname{Train}_{\text{post}} \left( \operatorname{Train}_{\text{mid}} \left( \operatorname{Train}_{\text{pre}}(\theta_0) \right) \right) \]

这里不能简单假设：

\[ \operatorname{Train}_A\circ\operatorname{Train}_B = \operatorname{Train}_B\circ\operatorname{Train}_A \]

因为深度网络训练是非线性的，数据出现的时机、顺序和优化器状态都会影响最终结果。

**换句话说，相同的数据、相同的训练计算量，不一定能够得到相同的模型。**

这意味着训练数据不仅有「数量」和「质量」，还存在第三个值得研究的维度：

\[ \boxed{\text{When to learn?}} \]

专门领域数据如果较早引入，可以使用较高的混合权重；如果引入较晚，就需要更加谨慎。

在实验设置下，一旦错过特定的可塑性窗口，后期简单增加领域数据占比也无法充分弥补。[Proceedings of Machine Learning Research](https://proceedings.mlr.press/v306/liu26cz.html?utm_source=chatgpt.com)

这就把 Mid-training 从一项工程技巧提升成了一个值得研究的问题：

**模型的可塑性如何随训练进程演化？能否通过优化策略保持或恢复这种可塑性？**