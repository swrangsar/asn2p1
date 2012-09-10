CFLAGS=-Wall -g -DNDEBUG

all: binaryHeapTest

binaryHeapTest: binaryHeap.o

clean:
	rm -f binaryHeap.o binaryHeapTest
