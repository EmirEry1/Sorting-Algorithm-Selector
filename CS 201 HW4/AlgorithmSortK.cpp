#include "AlgorithmSortK.h"

AlgorithmSortK::AlgorithmSortK(int k): SelectionAlgorithm(k) {
	this->k = k;
}
int AlgorithmSortK::select() {
	
	
	int arraySize = 0;
	
	cin >> arraySize;
	

	int *pArr = new int[arraySize];

	for (int i = 0;i < arraySize;i++) {
		cin >> pArr[i];
	}
	
	int *arrK = new int[k];

	for (int i = 0;i < k;i++) {
		arrK[i] = pArr[i];
	}


	
	this->sort(arrK,k);
	



	for (int j = k;j < arraySize;j++) {
		if (pArr[j]>arrK[k - 1])
		{

			arrK[k - 1] = pArr[j];
			
			this->sort(arrK,k);
			
		}
	}

	int a = arrK[k - 1];
	delete arrK;
	delete pArr;

	return a;
}
 /*int *AlgorithmSortK::sortK(int pArr[]) {
	
	int *arrK = new int[k];
	
	for (int i = 0;i < k;i++) { 
		arrK[i] = pArr[i];
	}

	
	this->arraySize = 3;
	this->sort(arrK);
	this->arraySize = 5;


	for (int j = k;j < arraySize;j++) {
		if (pArr[j]>arrK[k-1])
		{
			
			arrK[k-1] = pArr[j];
			this->arraySize = 3;
			this->sort(arrK);
			this->arraySize = 5;
		}
	}
	return arrK;
	
}
*/
 AlgorithmSortK::~AlgorithmSortK() {
	 
}
