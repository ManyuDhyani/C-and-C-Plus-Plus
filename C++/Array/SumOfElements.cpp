/*
Given an array of integers, find sum of its elements.
Examples : 

Input : arr[] = {1, 2, 3}
Output : 6
1 + 2 + 3 = 6

Input : arr[] = {15, 12, 13, 10}
Output : 50
*/
#include <bits/stdc++.h>
using namespace std;
 
// function to return sum of elements
// in an array of size n
int sum(int arr[], int n)
{
    int sum = 0; // initialize sum
 
    // Iterate through all elements
    // and add them to sum
    for (int i = 0; i < n; i++)
    sum += arr[i];
 
    return sum;
}
 
// Driver code
int main()
{
    int arr[] = {12, 3, 4, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of given array is " << sum(arr, n);
    return 0;
}
 
/* This code is contributed by rathbhupendra
Output : Sum of given array is 34 

Sum of given array is 34
Time Complexity: O(n)

Auxiliary Space: O(1)

Another Method: Using STL
Calling inbuilt function for sum of elements of an array in STL.
accumulate(first, last, sum);
first, last : first and last elements of range  
                whose elements are to be added
sum :  initial value of the sum

This function returns the array sum.

#include <bits/stdc++.h>
using namespace std;
 
// Driver code
int main()
{
    int arr[] = {12, 3, 4, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
      // calling accumulate function, passing first, last element and
    // initial sum, which is 0 in this case.
    cout << "Sum of given array is " << accumulate(arr, arr + n, 0);
    return 0;
}
*/