#include "AlgorithmSortQuick.h"

AlgorithmSortQuick::AlgorithmSortQuick(int k) : SelectionAlgorithm(k){
	this->k = k;
}

int AlgorithmSortQuick::select() {
	int N = 0;
	cin >> N;
	int* arr = new int[N];

	for (int i = 0;i < N;i++) {
		cin >> arr[i];
	}
	int result = quickSelect(arr,0,N-1,k);
	delete [] arr;
	return result;

}

int AlgorithmSortQuick::quickSelect(int*arr,int left,int right,int k) {

	if ((right-left) < 10) {

		for (int i = left;i <= right;i++) {
			int tmp = arr[i];
			for (int j = i; j > 0 && arr[j-1]<tmp;j--) {
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
			}
			
		}
		return arr[left + k - 1];
	}
	else {
		/*
		for (int n = left;n <= right;n++) {
		cout << arr[n] << " ";
		}
		cout << endl;
		*/
		

		int middle = (left + right) / 2;
		
		int tmp = 0;
		if (arr[right] > arr[left]) {
			tmp=arr[right];
			arr[right] = arr[left];
			arr[left] = tmp;
		}
		if(arr[right]>arr[middle]){
			tmp = arr[middle];
			arr[middle] = arr[right];
			arr[right] = tmp;
		}
		if (arr[middle]>arr[left]) {
			tmp = arr[middle];
			arr[middle] = arr[left];
			arr[left] = tmp;
		}
		tmp = arr[middle];
		arr[middle]=arr[right - 1];
		arr[right - 1] = tmp;
		int pivot = arr[right - 1];
		int i = left;
		int j = right-1;
		/*for (int n = left;n <= right;n++) {
			cout << arr[n] << " ";
		}
		cout << endl;
		*/
		
		while (true) {
			while (arr[++i]>pivot) {
			}
			while ((arr[--j])<pivot){
			}
			if (i < j) {
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			else {
				
				break;
			}
		}
		
		arr[right - 1] = arr[i];
		arr[i] = pivot;
		if((i-left+1)==k){
			return pivot;
		}
		else if(k>(i-left+1)) {
			
			/*
			for (int n = left;n <=right ;n++) {
			cout << arr[n] << " ";
			}
			cout << endl;
			cout << "Completed grouping" << endl;
			*/
			
			
			
			return quickSelect(arr,i+1,right, k-i-1+left);
		}
		else {
			/*
			for (int n = left;n <= right;n++) {
				cout << arr[n] << " ";
			}
			cout << endl;
			cout << "Completed grouping" << endl;*/
			
			
			
			return quickSelect(arr,left,i-1,k);
		}


	}
	
		
		
		
	}
	

AlgorithmSortQuick::~AlgorithmSortQuick() {

}
