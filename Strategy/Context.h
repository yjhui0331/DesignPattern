#pragma once

#include <iostream>

#include "Strategy.h"

class Strategy;
/*
*�������Strategyģʽ�Ĺؼ���Ҳ��Strategyģʽ��Templateģʽ�ĸ����������ڡ�
*Strategyͨ������ϡ���ί�У���ʽʵ���㷨��ʵ�֣����칹����Templateģʽ���ȡ���Ǽ̳еķ�ʽ
*������ģʽ������Ҳ�Ǽ̳к��������ʵ�ֽӿ����õķ�ʽ������
*/

class Context
{
public:
	Context(Strategy* pStrategy);
	virtual ~Context();


	void ContextInterface();

private:
	Strategy* m_pStrategy;//��Ϸ�ʽ
};

