#include "AlgorithmSortAll.h"

AlgorithmSortAll::AlgorithmSortAll(int k): SelectionAlgorithm (k) {

}

int AlgorithmSortAll::select() {
	
	
	int arraySize = 0;
	cin >> arraySize;
	int *pArr = new int[arraySize];

	

	for (int i = 0;i < arraySize;i++) {
		cin >> pArr[i];
		
	}

	

	
	
	this->sort(pArr,arraySize);
	
	int a= pArr[k-1];

	delete pArr;
	return a;
}



AlgorithmSortAll::~AlgorithmSortAll() {

}