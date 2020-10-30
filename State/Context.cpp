#include "Context.h"


Context::Context(State* pState)
{
	if (nullptr != pState)
	{
		m_pState = pState;
	}
}
Context::~Context()
{

}

void Context::Request()
{
	m_pState->Handle(this);
}

void Context::ChangeState(State *pState)
{
	if (pState){
		m_pState = pState;
	}
}