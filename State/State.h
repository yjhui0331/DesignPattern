#pragma once

#include <iostream>

#include "Context.h"

class Context;

class State
{
public:
	State();
	virtual ~State();

	virtual void Handle(Context* pContext) = 0;
};

class ConcreteStateA : public State
{
public:
	ConcreteStateA();
	~ConcreteStateA();

	virtual void Handle(Context* pContext);
private:

};



class ConcreteStateB:public State
{
public:
	ConcreteStateB();
	~ConcreteStateB();

	virtual void Handle(Context* pContext);
private:

};

