APP =			bubbleSort \
			selectionSort \
			insertionSort \
			mergeSort

all:			${APP}

bubbleSort:		bubbleSortMain.cpp bubbleSort.cpp
			@g++ -o bubbleSort bubbleSortMain.cpp bubbleSort.cpp

selectionSort:		selectionSortMain.cpp selectionSort.cpp
			@g++ -o selectionSort selectionSortMain.cpp selectionSort.cpp

insertionSort:		insertionSortMain.cpp insertionSort.cpp
			@g++ -o insertionSort insertionSortMain.cpp insertionSort.cpp

mergeSort:		mergeSortMain.cpp mergeSort.cpp
			@g++ -o mergeSort mergeSortMain.cpp mergeSort.cpp

clean:
			@rm -f ${APP}
