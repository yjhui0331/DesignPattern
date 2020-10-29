#include "Context.h"


Context::Context(Strategy* pStrategy)
{
	std::cout << "Context()" << std::endl;

	m_pStrategy = pStrategy;

}
Context::~Context()
{
	std::cout <<" ~Context()..." << std::endl;
}


void Context::ContextInterface()
{
	if (nullptr != m_pStrategy)
	{
		m_pStrategy->AlgorithmInterface();
	}
}