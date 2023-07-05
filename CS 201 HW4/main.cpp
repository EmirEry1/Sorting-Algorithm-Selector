


#include <iostream>
#include <string>
#include <fstream>

#include "TestBed.h"
#include "AlgorithmSortAll.h"
#include "AlgorithmSortK.h"
#include "AlgorithmSortQuick.h"

using namespace std;
int main(int argc, char *argv[]) {
	
	string testfile;
	if (argc < 2) {
	cout << "Enter a test file name:" << endl;
	cin >> testfile;
	}
	else {
	testfile = argv[1];
	}
	ifstream file(testfile.c_str());
	if (file.is_open()) {
	cin.rdbuf(file.rdbuf());
	}
	else {
	cout << "Error: cannot read the test file!" << endl;
	return -1;
	}
	int algorithmType = 0;
	int k = 0;
	// Numbers are obtained from the file line by line with cin
	cin >> algorithmType;
	cin >> k;
	// Create a TestBed object, initialize and execute the algorithm


	TestBed *testBed = new TestBed();
	testBed->setAlgorithm(algorithmType,k);
	testBed->execute();

	delete testBed;
	return 0;
	
	
	

	
	/*
	int *arr = new int[14];

	arr[0] = 8;
	arr[1] = 1;
	arr[2] = 9;
	arr[3] = 5;
	arr[4] = 12;
	arr[5] = 3;
	arr[6] = 3;
	arr[7] = 7;
	arr[8] = 21;
	arr[9] = 4;
	arr[10] = 6;
	arr[11] = 8;
	arr[12] = 16;
	arr[13] = 2;
	*/
	

	/*
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4]<< endl;
	*/
	
	/*
	AlgorithmSortQuick *sorter = new AlgorithmSortQuick(100);
	cout << "Starts Here" << endl;
	int element = 0;

	
	for (int i = 13;i > 0;i--) {
	element = sorter->quickSelect(arr, 0, 13, i);
	cout << element<<endl;
	}
	
	

	cout<< sorter->quickSelect(arr, 0, 13, 5);
	
	


	delete sorter;
	
	return 0;
	*/
	
	
}



