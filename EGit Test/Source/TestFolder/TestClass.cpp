
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
	std::cin >> name;

	if (name != "")
		std::cout << "Hello " << name << "! My name is TestClass :)" <<
		std::endl;
	else
		std::cout << "Hello! My name is TestClass :)" << std::endl;

}

// Initialization
void TestClass::initVariables()
{
	name = "";
}
