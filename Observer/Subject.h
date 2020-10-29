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
	
	void Attach(Observer* pObserver);	//��������
	void Detach(Observer* pObserver);	//ɾ������
	void Notify();						//֪ͨ����ı�״̬

	// �麯�����ṩĬ�ϵ�ʵ�֣�����������Լ�ʵ�������� �����ʵ��
	//����״̬
	virtual void SetState(int nState);
	//��ȡ״̬
	virtual int GetState();				

protected:
	int m_nSubjectState;				//ģ�Ᵽ��Subject״̬����
private:
	std::list<Observer*> m_ListObserver;//����Observerָ������
};


class ConcreteSubject :public Subject
{
public:
	ConcreteSubject() {};

	virtual ~ConcreteSubject() {};

	// �������Լ�ʵ�������� �����ʵ��
	virtual void SetState(int nState); //����״̬
	virtual int GetState();				//��ȡ״̬
};

#endif