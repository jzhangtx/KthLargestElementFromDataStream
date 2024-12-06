Kth Largest Element From Data Stream

(This can be implemented with std::priority_queue or std::heap which std::greater passed in as a parameter when initializing them. That is easier but not as fun)

Given an incoming stream of data, you need to find the kth largest element at each step.

Implement the KthLargest class:

KthLargest(int k) initializes the KthLargest object with the integer k and is called at the beginning.
int add(int num) adds the integer num from the data stream, and returns the kth largest element until now.
int add(int num) returns -1 if there aren't k elements so far.

Testing
Input Format
The first line contains two space-separated integers k and n where n is the count of numbers in the stream.

The second line has n space-separated numbers.

Output Format
Space-separated results of int add(int num).

Sample Input
3 7
2 4 3 7 4 5 8
Expected Output
-1 -1 2 3 4 4 5