#ifndef _TESTBED_

#define _TESTBED_



#include <iostream>
#include "SelectionAlgorithm.h"

class TestBed
{
public:
	TestBed();
	~TestBed();
	void execute();
	void setAlgorithm(int, int);
private:
	SelectionAlgorithm *algorithm;

};
#endif // !TESTBED

