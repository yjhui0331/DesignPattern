#pragma once

#include <iostream>

class AbstractionImpl
{
public:
	virtual~AbstractionImpl();
	virtual void OperationImpl() = 0;
protected:
	AbstractionImpl();
private:
};

class ConcreteAbstractionImplA : public AbstractionImpl
{
public:
	ConcreteAbstractionImplA();
	~ConcreteAbstractionImplA();
	virtual void OperationImpl();
private:

};

class ConcreteAbstractionImplB : public AbstractionImpl
{
public:
	ConcreteAbstractionImplB();
	~ConcreteAbstractionImplB();
	virtual void OperationImpl();
private:

};

