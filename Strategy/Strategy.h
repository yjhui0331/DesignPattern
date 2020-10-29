#pragma once

#include <iostream>


class Strategy
{
public:
	Strategy();
	virtual~Strategy();

	virtual void AlgorithmInterface() = 0;

protected:

private:

};

class ConcretrStrategyA : public Strategy 
{
public:
	ConcretrStrategyA();
	virtual~ConcretrStrategyA();

	void AlgorithmInterface();

private:

};

class ConcretrStrategyB : public Strategy
{
public:
	ConcretrStrategyB();
	virtual~ConcretrStrategyB();

	void AlgorithmInterface();

private:

};

