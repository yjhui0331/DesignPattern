#pragma once

#include "State.h"

class State;

class Context
{
public:
	Context(State* pState);
	virtual ~Context();

	void Request();

	void ChangeState(State *pState);
private:
	State* m_pState;

};

