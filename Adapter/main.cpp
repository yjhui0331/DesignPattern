// Adapter.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "Adapter.h"

#include <iostream>



/*
意图:
	将一个类的接口转换成客户希望的另外一个接口。Adapter模式使得原本由于接口不兼容而不能一起工作的那些类可以一起工作。

角色：
	Target  目标使用的接口
	Adaptee 第三方类接口

	Adapter 适配器本身 通过继承Target，父接口，在接口中适配调用Adaptee特殊功能接口（对象组合方式实现）

适应性：
	你想使用一个已经存在的类，而它的接口不符合你的需求。
	你想创建一个可以复用的类，该类可以与其他不相关的类或不可预见的类（即那些接口可能不一定兼容的类）协同工作。
	（仅适用于对象Adapter）你想使用一些已经存在的子类，但是不可能对每一个都进行子类化以匹配它们的接口。对象适配器可以适配它的父类接口。
*/



int main()
{
	std::cout << "Adapter Test \n" << std::endl;

	Adaptee* pAdaptee = new Adaptee;

	Target* pTarget = new Adapter(pAdaptee);//创建 派生类

	std::cout << std::endl;

	pTarget->Request();			//调用特殊的功能

	std::cout <<std::endl;

	delete pTarget;
	delete pAdaptee;
}


/*
执行结果

Adapter Test

Adaptee::Constructors

Target::Constructors
Adaptet::Constructors

Adaptet::Request()
	Adaptee::SpecificRequest()

Adaptet::Destructors
Target::Destructors
Adaptee::Destructors
*/