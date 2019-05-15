
#ifndef TESTFOLDER_TESTCLASS_HPP_
#define TESTFOLDER_TESTCLASS_HPP_

#include <iostream>
#include <ctime>
#include <string>

class TestClass
{
public:
	// Constructor / Destructor
	TestClass();
	virtual ~TestClass();

	// Functions
	void testMethod();
	void setCurrentTime();

private:
	// Initialization
	void initVariables();

	// Variables
	std::string name;
	std::time_t time;
	std::tm* localtime;
};

#endif /* TESTFOLDER_TESTCLASS_HPP_ */
