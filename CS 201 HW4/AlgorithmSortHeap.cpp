#include "AlgorithmSortHeap.h"
#include "BinaryHeap.h"


AlgorithmSortHeap::AlgorithmSortHeap(int k) : SelectionAlgorithm(k){
	this->k = k;
}
int AlgorithmSortHeap::select() {
	int n = 0;
	cin >> n;
	
	BinaryHeap *heap = new BinaryHeap(k);

	int element;
	for (int j = 1;j <= k;j++) {
		cin >> element;
		heap->insert(element);
	}

	for (int i = k + 1;i <= n;i++) {
		cin >> element; 
		if (heap->getMin()<=element) {
			heap->deleteMin();
			heap->insert(element);
		}
	}

	return heap->getMin();

}
AlgorithmSortHeap::~AlgorithmSortHeap() {
	
}