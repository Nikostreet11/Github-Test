
#include "TestClass.hpp"


// Constructor / Destructor
TestClass::TestClass()
{
	initVariables();
}

TestClass::~TestClass()
{
}

// Methods
void TestClass::testMethod()
{
	std::cout << "Hi, my name is TestClass! What's your name?" << std::endl;

	std::cin >> name;

	if (name != "")
		std::cout << "Hello " << name << "! Nice to meet you :)" << std::endl;
	else
		std::cout << "Mysterious type huh?" <<
		" It's OK, nice to meet you anyway :)" << std::endl;
}

// Initialization
void TestClass::initVariables()
{
	name = "";
}
