
#include "TestClass.hpp"

// Constructor / Destructor
TestClass::TestClass()
{
	initVariables();
}

TestClass::~TestClass()
{
}

// Functions
void TestClass::testMethod()
{
	std::cout << "Hi, my name is TestClass!" << std::endl;

	setCurrentTime();

    std::cout << "Today's date is " <<
			(localtime->tm_mon + 1) << '/' <<
			localtime->tm_mday << "/" <<
    		(localtime->tm_year + 1900) << std::endl;
    		
	std::cout << "What's your name?" << std::endl;

	std::cin >> name;

	if (name != "")
		std::cout << "Hello " << name << "! Nice to meet you :)" << std::endl;
	else
		std::cout << "Mysterious type huh?" <<
		" It's OK, nice to meet you anyway :)" << std::endl;
}

void TestClass::setCurrentTime()
{
	time = std::time(0);
	localtime = std::localtime(&time);
}

// Initialization
void TestClass::initVariables()
{
	name = "";
	localtime = nullptr;
}
