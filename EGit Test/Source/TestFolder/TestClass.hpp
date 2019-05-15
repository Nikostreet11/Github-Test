
#ifndef TESTFOLDER_TESTCLASS_HPP_
#define TESTFOLDER_TESTCLASS_HPP_

#include <iostream>
#include <ctime>

class TestClass
{
public:
	// Constructor
	TestClass();
	// Destructor
	virtual ~TestClass();

	// Functions
	void testMethod();
	void setCurrentTime();

private:
	void initVariables();

	// Variables
	std::time_t time;
	std::tm* localtime;
};

#endif /* TESTFOLDER_TESTCLASS_HPP_ */
