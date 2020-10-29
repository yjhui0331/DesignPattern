// Bridge.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

/*
意图：
	将抽象部分与它的实现部分分离，使它们都可以独立地变化。

对象：
	Abstraction ：某个抽象基类，他的实现方式由AbstractionImpl完成
	AbstractionImpl: 实现类的抽象基类，定义了实现Abstraction的基本操作，而他的派生类(ConcreteAbstractionImplA、ConcreteAbstractionImplB)实现这些操作

接口函数：
	virtual AbstractionImpl::OperationImpl() = 0; 纯虚函数，定义了为实现Abstraction所需的基本操作，由AbstractionImpl派生类实现之
	Abstraction::Operation(); 函数中 根据不同的指针多态调用这个函数

解析：
	Bridge 用于将表示和实现解耦,两者可以独立的变化.在 Abstraction 类的派生类RefinedAbstraction中维护一个 AbstractionImpl 类指针,
	需要采用不同的实现方式的时候只需要传入不同的 AbstractionImpl 派生类类型的对象就可以了.

适应性：
	你不希望在抽象和实现部分之间有一个固定的绑定关系。例如这种情况可能是因为，在程序运行时刻实现部分应可以被选择或者切换。
	类的抽象以及它的实现都应该可以通过生成子类的方法加以扩充。这时Bridge 模式使你可以对不同的抽象接口和实现部分进行组合，并分别对它们进行扩充。
	对一个抽象的实现部分的修改应对客户不产生影响，即客户的代码不必重新编译。
*/


#include "Abstraction.h"
#include "AbstractionImpl.h"

int main()
{
	std::cout << "Bridge Test\n";

	AbstractionImpl* pImplA = new ConcreteAbstractionImplA;
	Abstraction* pabsA = new RefinedAbstraction(pImplA);//关联关系

	std::cout << std::endl;
	pabsA->Operation();
	std::cout << std::endl;

	delete pImplA;
	delete pabsA;

	std::cout << std::endl;

	AbstractionImpl* pImplB = new ConcreteAbstractionImplB;
	Abstraction* pabsB = new RefinedAbstraction(pImplB);//关联关系

	std::cout << std::endl;
	pabsB->Operation();
	std::cout << std::endl;

	delete pImplB;
	delete pabsB;
}


/*
Bridge Test
 AbstractionImpl::AbstractionImpl()
 ConcreteAbstractionImplA::ConcreteAbstractionImplA()
 Abstraction::Abstraction()
 RefinedAbstraction::RefinedAbstraction(AbstractionImpl* pAbstractionimp)

 RRefinedAbstraction::Operation()
 ConcreteAbstractionImplA::OperationImpl()

 ConcreteAbstractionImplA::~ConcreteAbstractionImplA()
 AbstractionImpl::~AbstractionImpl()
 RefinedAbstraction::~RefinedAbstraction()
 Abstraction::~Abstraction()

 AbstractionImpl::AbstractionImpl()
 ConcreteAbstractionImplB::ConcreteAbstractionImpBl()
 Abstraction::Abstraction()
 RefinedAbstraction::RefinedAbstraction(AbstractionImpl* pAbstractionimp)

 RRefinedAbstraction::Operation()
 ConcreteAbstractionImplA::OperationImpl()

 ConcreteAbstractionImplB::~ConcreteAbstractionImpBl()
 AbstractionImpl::~AbstractionImpl()
 RefinedAbstraction::~RefinedAbstraction()
 Abstraction::~Abstraction()
*/