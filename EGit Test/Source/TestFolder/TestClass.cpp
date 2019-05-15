
#include "TestClass.hpp"

TestClass::TestClass()
{
	initVariables();
}

TestClass::~TestClass()
{
}

void TestClass::testMethod()
{
	std::cout << "Hi, I am TestClass!" << std::endl;

	setCurrentTime();

    std::cout << "Today's date is " <<
			(localtime->tm_mon + 1) << '/' <<
			localtime->tm_mday << "/" <<
    		(localtime->tm_year + 1900) << std::endl;
}

void TestClass::setCurrentTime()
{
	time = std::time(0);
	localtime = std::localtime(&time);
}

void TestClass::initVariables()
{
	localtime = nullptr;
}
