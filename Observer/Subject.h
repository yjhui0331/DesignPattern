#ifndef _SUBJECT_H
#define _SUBJECT_H

#include <list>
#include <iostream>
#include "Observer.h"

using namespace std;

class Observer;

class Subject
{
public:
	Subject() {
		m_nSubjectState = -1;
	};
	virtual ~Subject();
	
	void Attach(Observer* pObserver);	//新增对象
	void Detach(Observer* pObserver);	//删除对象
	void Notify();						//通知对象改变状态

	// 虚函数，提供默认的实现，派生类可以自己实现来覆盖 基类的实现
	//设置状态
	virtual void SetState(int nState);
	//获取状态
	virtual int GetState();				

protected:
	int m_nSubjectState;				//模拟保存Subject状态变量
private:
	std::list<Observer*> m_ListObserver;//保存Observer指针链表
};


class ConcreteSubject :public Subject
{
public:
	ConcreteSubject() {};

	virtual ~ConcreteSubject() {};

	// 派生类自己实现来覆盖 基类的实现
	virtual void SetState(int nState); //设置状态
	virtual int GetState();				//获取状态
};

#endif