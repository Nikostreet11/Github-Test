
#include <iostream>

#include "TestFolder/TestClass.hpp"

int main()
{
	std::cout << "Hello World!" << std::endl <<
			std::endl;
	TestClass test;
	test.testMethod();

	return 0;
}
