#include "Abstraction.h"


Abstraction::Abstraction()
{
	std::cout <<" Abstraction::Abstraction() "<< std::endl;
}

Abstraction::~Abstraction()
{
	std::cout << " Abstraction::~Abstraction() " << std::endl;
}



RefinedAbstraction::RefinedAbstraction(AbstractionImpl* pAbstractionimp)
{
	std::cout << " RefinedAbstraction::RefinedAbstraction(AbstractionImpl* pAbstractionimp) " << std::endl;
	m_pAbstractionimp = pAbstractionimp;
}
RefinedAbstraction::~RefinedAbstraction()
{
	std::cout << " RefinedAbstraction::~RefinedAbstraction() " << std::endl;
}

void RefinedAbstraction::Operation()
{
	std::cout << " RRefinedAbstraction::Operation() " << std::endl;
	m_pAbstractionimp->OperationImpl();
}