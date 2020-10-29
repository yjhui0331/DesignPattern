#include "Subject.h"

Subject::~Subject()
{
	std::list<Observer*>::iterator iter;
	for (iter = m_ListObserver.begin(); iter != m_ListObserver.end(); iter++)
	{
		delete(*iter);
	}

	m_ListObserver.clear();

	std::cout << "m_ListObserver.clear() \n" << std::endl;
}


void Subject::Attach(Observer* pObserver)
{
	if (NULL != pObserver){
		m_ListObserver.push_back(pObserver);
	}
	std::cout << "Attach an Observer \n" << std::endl;
}

void Subject::Detach(Observer* pObserver)
{
	std::list<Observer*>::iterator iter;

	if (NULL != pObserver){
		iter = std::find(m_ListObserver.begin(),m_ListObserver.end(),pObserver);
		if (iter != m_ListObserver.end())
		{
			m_ListObserver.erase(iter);
		}
	}
	std::cout << "Detach an Observer \n" << std::endl;
}

void Subject::Notify()
{
	std::cout << "Notify ObserverS State \n" << std::endl;

	std::list<Observer*>::iterator iter;
	for (iter = m_ListObserver.begin();iter != m_ListObserver.end();iter++)
	{
		(*iter)->UpDate(this);
	}
}

void Subject::SetState(int nState)
{
	std::cout << "State Set By Subject \n" << std::endl;
	m_nSubjectState = nState;
}

int Subject::GetState()
{
	std::cout << "State Get By Subject \n" << std::endl;
	return m_nSubjectState;
}


/*
	ConcreteSubject	类成员函数的实现
*/

void ConcreteSubject::SetState(int nState)
{
	std::cout << "SetState By ConcreteSubject" << std::endl;
	m_nSubjectState = nState;
}


int ConcreteSubject::GetState()
{
	std::cout << "Get By ConcreteSubject" << std::endl;
	return m_nSubjectState;
}

