#include  <stdio.h>

#include "Observer.h"

/*
��ͼ��
	���������һ��һ�Զ��������ϵ����һ�������״̬�����ı�ʱ���������������Ķ��󶼵õ�֪ͨ�����Զ����¡�

������
	��һ��ϵͳ��Ƴ�һϵ���໥Э��������һ�������ĸ����ã���Ҫά����ض���֮���һ���ԡ�

	�۲���ģʽ����һ�ֽ�����������-���ģ�

	һ����������״̬�����ı�ʱ���ᷢ��֪ͨ�����ǲ���֪��˭�����Ľ����ߣ���ÿ�������߶�����յ�֪ͨ����Щ�����߳�Ϊ�۲��ߡ�
	��Ϊ��֪ͨ����Ӧ��ÿ���۲��߶�����ѯĿ��״̬��Ȼ��ı������״̬�Ժ�Ŀ��״̬����ͬ����
	ʹ�ó�����
	ʹ�����װΪ�����ĸı��ʹ�ã�
	һ������ı�ͬʱ��Ҫ�ı��������󣬶���֪�������ж��ٶ�����Ҫ�ı䣻
	��ϣ�������ǽ���ϵġ�

�����ߣ�
	Subject��Ŀ�֪꣬�����Ĺ۲��ߣ��ṩע���ɾ���۲��߶���Ľӿ�

	Observer���۲��ߣ�Ϊ��Щ��Ŀ�귢���ı�ʱ����֪ͨ�Ķ�����һ�����½ӿ�

	ConcreteSubject������Ŀ�꣬�洢����״̬��״̬�ı�ʱ��������۲��߷���֪ͨ

	ConcreteObserver������۲��ߣ�ά��һ��ָ��ConcreteSubject��������ã��洢�й�״̬��ʵ�ָ��½ӿ�update��ʹ����״̬��Ŀ���״̬����һ��

��ȱ�㣺
1 Ŀ��͹۲���֮�������

2 ֧�ֹ㲥ͨ�ţ�Subject���͵�֪ͨ����Ҫָ�����Ľ����ߡ�֪ͨ���Զ��㲥�����������Ŀ�����Ǽǵ��йض���

3 ����ĸ��£������޺��Ĳ������ܻ�����۲��ߴ���ĸ��¡�
*/



int main()
{
	printf("Observer Test \n");

	Observer* pObserver1 = new ConcreteObserver;
	Observer* pObserver2 = new ConcreteObserver;

	//Subject* pSbuject = new ConcreteSubject;
	Subject* pSbuject = new Subject;

	pSbuject->Attach(pObserver1);	//��������
	pSbuject->Attach(pObserver2);
	pSbuject->SetState(true);		//����״̬
	pSbuject->Notify();			//֪ͨ����ı�״̬ Observer->UpDate() pSubject->GetState();

	pSbuject->Detach(pObserver2); //ɾ������
	
	pSbuject->SetState(false);		//����״̬
	pSbuject->Notify();			//֪ͨ����ı�״̬ Observer->UpDate() pSubject->GetState();

	delete pSbuject;

	system("pause\n");
}

/*
ִ�н��
Observer Test

Attach an Observer

Attach an Observer

State Set By Subject

Notify ObserverS State //֪ͨ��Ϣ

State Get By Subject
The ConcreteObserver State is 1

State Get By Subject
The ConcreteObserver State is 1

Detach an Observer

State Set By Subject
Notify ObserverS State

State Get By Subject
The ConcreteObserver State is 0

m_ListObserver.clear()
*/