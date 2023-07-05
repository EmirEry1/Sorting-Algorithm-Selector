
#include "SelectionAlgorithm.h"

SelectionAlgorithm::SelectionAlgorithm(int k){
	this->k = k;
	
}

int SelectionAlgorithm::select() {
	cout << "hello";
	return 0;
}


void SelectionAlgorithm::replace(int pArray[],int index) {
	int temp = pArray[index];
	pArray[index] = pArray[index + 1];
	pArray[index +1] = temp;
	
}




void SelectionAlgorithm::sort(int pArray[],int arraySize) {
	
	
	for (int i = 0;i <arraySize;i++) {
		
		
		this->findPlaceInArray(pArray, i);
		
	}
	
}

void SelectionAlgorithm::findPlaceInArray(int pArray[], int index) {

	while (true)
	{
		if (index == 0) {
			break;
		}
		else if (pArray[index] <= pArray[index - 1])
		{
			break;
		}

		else
		{
			this->replace(pArray, index - 1);
			index = index - 1;
		}
	}
}
SelectionAlgorithm::~SelectionAlgorithm() {

}

