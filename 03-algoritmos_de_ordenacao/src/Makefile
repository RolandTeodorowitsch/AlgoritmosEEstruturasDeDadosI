APP =			bubbleSort \
			selectionSort \
			insertionSort \
			mergeSort \
			quickSort1 \
			quickSort2

all:			${APP}

bubbleSort:		bubbleSortMain.cpp bubbleSort.cpp
			@g++ -o bubbleSort bubbleSortMain.cpp bubbleSort.cpp

selectionSort:		selectionSortMain.cpp selectionSort.cpp
			@g++ -o selectionSort selectionSortMain.cpp selectionSort.cpp

insertionSort:		insertionSortMain.cpp insertionSort.cpp
			@g++ -o insertionSort insertionSortMain.cpp insertionSort.cpp

mergeSort:		mergeSortMain.cpp mergeSort.cpp
			@g++ -o mergeSort mergeSortMain.cpp mergeSort.cpp

quickSort1:		quickSortMain.cpp quickSort1.cpp
			@g++ -o quickSort1 quickSortMain.cpp quickSort1.cpp

quickSort2:		quickSortMain.cpp quickSort2.cpp
			@g++ -o quickSort2 quickSortMain.cpp quickSort2.cpp

clean:
			@rm -f ${APP}
