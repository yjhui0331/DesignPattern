#ifndef _OBSERVER_H
#define _OBSERVER_H

#include "Subject.h"
using namespace std;

class Subject;

class Observer
{
public:
	Observer() {
		m_nObserverState = -1;
	};
	virtual ~Observer() {};
	
	//���麯�� ���಻ʵ�� ���������ʵ��
	virtual void UpDate(Subject* pSubject) = 0;//֪ͨ Observer ״̬�����˱仯

protected:
	int m_nObserverState;	//����Observe״̬
};

class ConcreteObserver :public Observer
{
public:
	ConcreteObserver(){}
	virtual ~ConcreteObserver() {}

	void UpDate(Subject* pSubject);
};
#endif
