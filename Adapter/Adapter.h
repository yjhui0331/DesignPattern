#pragma once
//#include  <stdio.h>
#include <iostream>

class Target
{
public:
	Target();
	virtual ~Target();

	virtual void Request();
private:
protected:
};

class Adaptee
{
public:
	Adaptee();
	~Adaptee();

	void SpecificRequest();//����Ĺ���
};

class Adapter : public Target
{
public:
	Adapter(Adaptee* pAdaptee);
	~Adapter();

	void Request();

protected:

private:
	Adaptee* m_pAdaptee;
};

