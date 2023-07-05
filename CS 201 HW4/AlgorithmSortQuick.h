#ifndef _ALGORITHMSORTQUICK_
#define _ALGORITHMSORTQUICK_

#include "SelectionAlgorithm.h"

class AlgorithmSortQuick: public SelectionAlgorithm
{
public:
	AlgorithmSortQuick(int);
	~AlgorithmSortQuick();
	int select();
	int quickSelect(int*,int,int,int);

private:

};














#endif





