#include "Adapter.h"
#include  <stdio.h>

/*
Target
*/
Target::Target()
{
	std::cout<<"Target::Constructors "<<std::endl;
}

Target::~Target()
{
	std::cout << "Target::Destructors " << std::endl; 
}

void Target::Request()
{
	std::cout << "Target::Request() " << std::endl;
}

/*
Adaptee
*/
Adaptee::Adaptee()
{
	std::cout << "Adaptee::Constructors " << std::endl;
}
Adaptee::~Adaptee()
{
	std::cout << "Adaptee::Destructors " << std::endl;
}

void Adaptee::SpecificRequest()
{
	std::cout << "Adaptee::SpecificRequest()" << std::endl;
}

/*
Adapter
*/
Adapter::Adapter(Adaptee* pAdaptee)
{
	std::cout << "Adaptet::Constructors " << std::endl;
	m_pAdaptee = pAdaptee;
}

Adapter::~Adapter()
{
	std::cout << "Adaptet::Destructors" << std::endl;

}

void Adapter::Request()
{
	std::cout << "Adaptet::Request()" << std::endl;
	m_pAdaptee->SpecificRequest();
}
