#include "Strategy.h"

/*
Strategy
*/
Strategy::Strategy()
{
	std::cout<< " Strategy() " <<std::endl;
}
Strategy::~Strategy()
{
	std::cout << " ~Strategy()... " << std::endl;
}

/*
ConcretrStrategyA
*/

ConcretrStrategyA::ConcretrStrategyA()
{
}

ConcretrStrategyA::~ConcretrStrategyA()
{
	std::cout << " ~ConcretrStrategyA()... " << std::endl;
}

void ConcretrStrategyA::AlgorithmInterface()
{
	std::cout << " ConcretrStrategyA::AlgorithmInterface() Implemented " << std::endl;
}

/*
ConcretrStrategyB
*/
ConcretrStrategyB::ConcretrStrategyB()
{
}

ConcretrStrategyB::~ConcretrStrategyB()
{
	std::cout << " ~ConcretrStrategyB()... " << std::endl;
}

void ConcretrStrategyB::AlgorithmInterface()
{
	std::cout << " ConcretrStrategyB::AlgorithmInterface() " << std::endl;
}