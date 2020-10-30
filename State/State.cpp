#include "State.h"

State::State()
{

}

State::~State()
{

}

ConcreteStateA::ConcreteStateA()
{

}

ConcreteStateA::~ConcreteStateA()
{

}

void ConcreteStateA::Handle(Context* pContext)
{
	std::cout << "Handle() by ConcreteStateA" << std::endl;
	if (pContext){
		pContext->ChangeState(new ConcreteStateB);
	}
}

ConcreteStateB::ConcreteStateB()
{

}

ConcreteStateB::~ConcreteStateB()
{

}

void ConcreteStateB::Handle(Context* pContext)
{
	std::cout << "Handle() by ConcreteStateB" << std::endl;
	if (pContext) {
		pContext->ChangeState(new ConcreteStateA);
	}
}
