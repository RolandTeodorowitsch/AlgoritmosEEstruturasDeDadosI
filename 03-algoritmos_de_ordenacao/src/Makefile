APP =			bubbleSort \
			selectionSort \
			insertionSort

all:			${APP}

bubbleSort:		bubbleSortMain.cpp bubbleSort.cpp
			@g++ -o bubbleSort bubbleSortMain.cpp bubbleSort.cpp

selectionSort:		selectionSortMain.cpp selectionSort.cpp
			@g++ -o selectionSort selectionSortMain.cpp selectionSort.cpp

insertionSort:		insertionSortMain.cpp insertionSort.cpp
			@g++ -o insertionSort insertionSortMain.cpp insertionSort.cpp

clean:
			@rm -f ${APP}
