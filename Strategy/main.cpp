﻿// Strategy.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


/*
意图:
	定义一系列的算法,把它们一个个封装起来, 并且使它们可相互替换。本模式使得算法可独立于使用它的客户而变化。

解析：
	简而言之一句话,Strategy 模式是对算法的封装.处理一个问题的时候可能有多 种算法,
	这些算法的接口(输入参数,输出参数等)都是一致的,
	那么可以考虑采用 Strategy 模式对这些算法进行封装,在基类中定义一个函数接口就可以了.

分析：
	Strategy模式和Template模式要解决的问题是相同（类似）的，都是为了给业务逻辑（算法）具体实现和抽象接口之间的解耦。
	Strategy模式将逻辑（算法）封装到一个类（Context）里面，
	通过组合的方式将具体算法的实现在组合对象中实现，再通过委托的方式将抽象接口的实现委托给组合对象实现。
	State模式也有类似的功能，他们之间的区别将在讨论中给出。

讨论：
	可以看到Strategy模式和Template模式解决了类似的问题，也正如在Template模式中分析的，
	Strategy模式和Template模式实际是实现一个抽象接口的两种方式：

	#继承和组合之间的区别。
	①Template方式：要实现一个抽象接口，继承是一种方式：我们将抽象接口声明在基类中，将具体的实现放在具体子类中。
	②Strategy方式：组合（委托）是另外一种方式：我们将Context::ContextInterface接口的实现放在被组合对象ConcretrStrategyA::AlgorithmInterface中，
		将抽象类接口Strategy放在组合类中。
		
	这两种方式各有优缺点，先列出来：
	1） 继承：
􀂄	 优点
		1）易于修改和扩展那些被复用的实现。
􀂄	 缺点
		1）破坏了封装性，继承中父类的实现细节暴露给子类了；
		2）“白盒”复用，原因在1）中；
		3）当父类的实现更改时，其所有子类将不得不随之改变
		4）从父类继承而来的实现在运行期间不能改变（编译期间就已经确定了）。

	2） 组合
􀂄	优点
		1）“黑盒”复用，因为被包含对象的内部细节对外是不可见的；
		2）封装性好，原因为1）；
		3）实现和抽象的依赖性很小（组合对象和被组合对象之间的依赖性小）；
		4）可以在运行期间动态定义实现（通过一个指向相同类型的指针，典型的是抽象基类的指针）。
	􀂄 缺点
		1）系统中对象过多。
	
	结论：
		从上面对比中我们可以看出，组合相比继承可以取得更好的效果，因此在面向对象的设计中的有一条很重要的原则就是：
	优先使用（对象）组合，而非（类）继承（Favor Composition Over Inheritance）。
*/


#include <iostream>

#include "Strategy.h"
#include "Context.h"

int main()
{
    std::cout << "Strategy Test!\n";

	Strategy* pS = new ConcretrStrategyA();

	Context* pC = new Context(pS);

	std::cout << "\n";

	pC->ContextInterface();

	std::cout << "\n";

	delete pS;
	pS = nullptr;
	delete pC;
	pC = nullptr;
	
}

/*执行结果
Strategy Test!
 Strategy()
Context()

 ConcretrStrategyA::AlgorithmInterface() Implemented

 ~ConcretrStrategyA()...
 ~Strategy()...
 ~Context()...
*/
