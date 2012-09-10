#include <stdio.h>
#include <stdlib.h>
#include "binaryHeap.h"

int main(int argc, char* argv[])
{
	heap* Heap;
	Heap = initialize(32);
	printHeap(Heap);
	
	// initialization
	int i = 0;
	for(i = 5; i <= 18; i++) {
		insert(Heap, i);
	}
	printHeap(Heap);
	
	Heap = decreaseAllKeys(Heap, 2);
	printHeap(Heap);
	
	Heap = insert(Heap, 19);
	Heap = insert(Heap, 18);
	printHeap(Heap);
	
	decreaseAllKeys(Heap, 1);
	printHeap(Heap);
/*	
	deleteKey(Heap, 8);
	printHeap(Heap);
	deleteKey(Heap, 18);
	printHeap(Heap);
	deleteKey(Heap, 19);
	printHeap(Heap);
*/
// modified delete
	delete(Heap);
	printHeap(Heap);
	delete(Heap);
	printHeap(Heap);
	delete(Heap);
	printHeap(Heap);
	
	destroy(Heap);
	
	return 0;
}
