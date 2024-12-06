KthLargestElementFromDataStream: KthLargestElementFromDataStream.o
	g++ -g -o KthLargestElementFromDataStream.exe KthLargestElementFromDataStream.o -pthread    

KthLargestElementFromDataStream.o: KthLargestElementFromDataStream/KthLargestElementFromDataStream.cpp
	g++ -g  -c -pthread KthLargestElementFromDataStream/KthLargestElementFromDataStream.cpp
