#ifndef _SELECTIONALGORITHM_

#define _SELECTIONALGORITHM_

#include <iostream>
#include <string>

using namespace std;

class SelectionAlgorithm{
public:
	
	SelectionAlgorithm(int);
	
	virtual int select();
	void replace(int [],int);
	void sort(int [],int);

	void findPlaceInArray(int [], int);
	
	
	~SelectionAlgorithm();
protected:
	int k;

};
#endif


