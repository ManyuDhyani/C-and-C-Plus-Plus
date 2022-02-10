/*
Given an array of positive integers. All numbers occur an even number of times except one number which occurs an odd number of times. Find the number in O(n) time & constant space.

Examples : 

Input : arr = {1, 2, 3, 2, 3, 1, 3}
Output : 3

Input : arr = {5, 7, 2, 7, 5, 2, 5}
Output : 5

XOR of all elements gives us odd occurring elements. Please note that the XOR of two elements is 0 if both elements are the same and the XOR of a number x with 0 is x.
Time Complexity: O(n)
Auxiliary Space: O(1)

*/

#include <bits/stdc++.h>
using namespace std;

int getOddOccurrence(int ar[], int ar_size)
{
	int res = 0;
	for (int i = 0; i < ar_size; i++)	
		res = res ^ ar[i];
	
	return res;
}

int main()
{
	int ar[] = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};
	int n = sizeof(ar)/sizeof(ar[0]);

	cout << getOddOccurrence(ar, n);
	
	return 0;
}
