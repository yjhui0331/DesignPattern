# DesignPattern
设计模式
/*
意图：
	允许一个对象在其内部状态改变时改变它的行为。对象看起来似乎修改了它的类。
	其好处是可以通过改变状态来获得不同的行为。实现时需要将各种具体的状态类抽象出来。

角色职责：
	Context：实现切换。（里面维护了一个具体状态的实例）State* m_pState;

	State：实现类接口(抽象状态类) 定义一个接口，封装一些特定的行为
	ConcreteState：具体实现类（具体状态类）每个子类实现一个与context的一个状态相关的行为

解析：
	State 模式主要解决的是在开发中时常遇到的根据不同的状态需要进行不同的 
	处理操作的问题,而这样的问题,大部分人是采用 switch-case 语句进行处理的, 
	这样会造成一个问题:分支过多,而且如果加入一个新的状态就需要对原来的代 码进行编译。

	State 模式采用了对这些不同的状态进行封装的方式处理这类问题, 当状态改变的时候进行处理然后再切换到另一种状态,
	也就是说把状态的切换责 任交给了具体的状态类去负责。
	
	同时,State 模式和 Strategy 模式在图示上有很 多相似的地方,
	需要说明的是两者的思想都是一致的。
	只不过封装的东西不同:
	State 模式封装的是不同的 状态,
	Stategy 模式封装的是不同的 算法.

优点
	⑴应用状态模式使程序扩展起来变的简单
	⑵避免了多重条件语句的应用
	⑶程序结构会变得比较清晰

缺点
	⑴应用状态模式使类变的过多，而且简单的关系会变的理解困难
	⑵没有很好的遵守开闭原则，引入新的新的状态会导致原有状态的修改
	⑶没有很好的处理耦合关系，从例子中可以看出，应用状态模式不仅会使状态类和环境类进行关联而且状态类之间也有关系存在
	因此我感觉跟其他模式相比状态模式不算是一个很好的设计


State模式在实现中，有两个关键点：
	1）将State声明为Context的友元类（friend class），其作用是让State模式访问Context的protected接口ChangeSate（）。
	2）State及其子类中的操作都将Context*传入作为参数，其主要目的是State类可以通过这个指针调用Context中的方法（在本示例代码中没有体现）。
	这也是State模式和Strategy模式的最大区别所在。
	运行了示例代码后可以获得以下的结果：连续3次调用了Context的Request（）因为每次调用后状态都会改变（A－B－A），因此该动作随着Context的状态的转变而获得了不同的结果。

讨论
State模式的应用也非常广泛，从最高层逻辑用户接口GUI到最底层的通讯协议（例如GoF在《设计模式》中就利用State模式模拟实现一个TCP连接的类。）都有其用武之地。

State模式和Strategy模式又很大程度上的相似：它们都有一个Context类，都是通过委托（组合）给一个具有多个派生类的多态基类实现Context的算法逻辑。
两者最大的差别就是State模式中派生类持有指向Context对象的引用，并通过这个引用调用Context中的方法，但在Strategy模式中就没有这种情况。
因此可以说一个State实例同样是Strategy模式的一个实例，反之却不成立。实际上State模式和Strategy模式的区别还在于它们所关注的点不尽相同：
State模式主要是要适应对象对于状态改变时的不同处理策略的实现，而Strategy则主要是具体算法和实现接口的解耦（coupling），
Strategy模式中并没有状态的概念（虽然很多时候有可以被看作是状态的概念），并且更加不关心状态的改变了。

State模式很好地实现了对象的状态逻辑和动作实现的分离，状态逻辑分布在State的派生类中实现，
而动作实现则可以放在Context类中实现（这也是为什么State派生类需要拥有一个指向Context的指针）。
这使得两者的变化相互独立，改变State的状态逻辑可以很容易复用Context的动作，也可以在不影响State派生类的前提下创建Context的子类来更改或替换动作实现。

State模式问题主要是逻辑分散化，状态逻辑分布到了很多的State的子类中，很难看到整个的状态逻辑图，这也带来了代码的维护问题。
*/