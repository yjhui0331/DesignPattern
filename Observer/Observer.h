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
	
	//纯虚函数 基类不实现 派生类必须实现
	virtual void UpDate(Subject* pSubject) = 0;//通知 Observer 状态发生了变化

protected:
	int m_nObserverState;	//保存Observe状态
};

class ConcreteObserver :public Observer
{
public:
	ConcreteObserver(){}
	virtual ~ConcreteObserver() {}

	void UpDate(Subject* pSubject);
};
#endif
