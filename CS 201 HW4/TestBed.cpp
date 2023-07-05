#include "TestBed.h"
#include "AlgorithmSortAll.h"
#include "AlgorithmSortK.h"
#include "AlgorithmSortHeap.h"
#include "AlgorithmSortQuick.h"
#include <ctime>

TestBed::TestBed()  {

}

void TestBed::execute() {

	// Time stamp before the computations
	clock_t start = clock();
	cout <<"Result: " <<(algorithm->select())<<endl;
	// Time stamp after the computations
	clock_t end = clock();
	double cpu_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;
	cout << "Duration(sec): "<< cpu_time<<endl;
	
	
}

void TestBed::setAlgorithm(int type, int k) {
	if (type == 1) {
		 algorithm = new AlgorithmSortAll(k);
	}
	else if (type == 2) {
		 algorithm = new AlgorithmSortK(k);
	}
	else if (type == 3) {
		algorithm = new AlgorithmSortHeap(k);
	}
	else if (type == 4) {
		algorithm = new AlgorithmSortQuick(k);
	}
	else {
		cout << "Invalid type. Please write a valid type.";
	}
}

TestBed::~TestBed() {
	
	delete algorithm;
}
