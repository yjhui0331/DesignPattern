#pragma once

#include <iostream>

#include "Strategy.h"

class Strategy;
/*
*这个类是Strategy模式的关键，也是Strategy模式和Template模式的根本区别所在。
*Strategy通过“组合”（委托）方式实现算法（实现）的异构，而Template模式则采取的是继承的方式
*这两个模式的区别也是继承和组合两种实现接口重用的方式的区别
*/

class Context
{
public:
	Context(Strategy* pStrategy);
	virtual ~Context();


	void ContextInterface();

private:
	Strategy* m_pStrategy;//组合方式
};

