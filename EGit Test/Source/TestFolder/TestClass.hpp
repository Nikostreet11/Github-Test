
#ifndef TESTFOLDER_TESTCLASS_HPP_
#define TESTFOLDER_TESTCLASS_HPP_

#include <iostream>
#include <string>

class TestClass
{
public:
	// Constructor / Destructor
	TestClass();
	virtual ~TestClass();

	// Methods
	void testMethod();

private:
	// Initialization
	void initVariables();

	// Variables
	std::string name;
};

#endif /* TESTFOLDER_TESTCLASS_HPP_ */
