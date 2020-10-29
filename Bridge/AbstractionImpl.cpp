#include "AbstractionImpl.h"

AbstractionImpl::AbstractionImpl()
{
	std::cout << " AbstractionImpl::AbstractionImpl()" << std::endl;
}

AbstractionImpl::~AbstractionImpl()
{
	std::cout << " AbstractionImpl::~AbstractionImpl()" << std::endl;
}
// void AbstractionImpl::OperationImpl()
// {
// 	std::cout<< " AbstractionImp::OperationImpl() "<<std::endl;
// }

/*
ConcreteAbstractionImpA
*/
ConcreteAbstractionImplA::ConcreteAbstractionImplA()
{
	std::cout << " ConcreteAbstractionImplA::ConcreteAbstractionImplA()" << std::endl;
}

ConcreteAbstractionImplA::~ConcreteAbstractionImplA()
{
	std::cout << " ConcreteAbstractionImplA::~ConcreteAbstractionImplA()" << std::endl;
}


void ConcreteAbstractionImplA::OperationImpl()
{
	std::cout << " ConcreteAbstractionImplA::OperationImpl() " << std::endl;
}

/*
ConcreteAbstractionImpB
*/
ConcreteAbstractionImplB::ConcreteAbstractionImplB()
{
	std::cout << " ConcreteAbstractionImplB::ConcreteAbstractionImpBl()" << std::endl;
}

ConcreteAbstractionImplB::~ConcreteAbstractionImplB()
{
	std::cout << " ConcreteAbstractionImplB::~ConcreteAbstractionImpBl()" << std::endl;
}

void ConcreteAbstractionImplB::OperationImpl()
{
	std::cout << " ConcreteAbstractionImplB::OperationImpl() " << std::endl;
}