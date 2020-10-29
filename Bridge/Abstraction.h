#pragma once
#include <iostream>
#include "AbstractionImpl.h"

class AbstractionImpl;

class Abstraction
{
public:

	virtual ~Abstraction();

	virtual void Operation() = 0;

protected:
	Abstraction();

private:
};


class RefinedAbstraction : public Abstraction
{
public:
	RefinedAbstraction(AbstractionImpl* pAbstractionimp);
	virtual ~RefinedAbstraction();

	void Operation();

protected:

private:
	AbstractionImpl* m_pAbstractionimp;
};
