#include <stdio.h>

//Method 1: Recursion
int binarySearch(int arr[], int low, int high, int num) {

    if(low<=high) {
        int mid = low + (high - low) / 2;

        if(arr[mid] == num)
            return mid;
        
        if(arr[mid] > num)
            return binarySearch(arr, low, mid - 1, num);

        return binarySearch(arr, mid + 1, high, num);
    }
    return -1;
}

//Method 2: Iterative

// int binarySearch(int arr[], int l, int r, int x)
// {
//     while (l <= r) {
//         int m = l + (r - l) / 2;
 
//         // Check if x is present at mid
//         if (arr[m] == x)
//             return m;
 
//         // If x greater, ignore left half
//         if (arr[m] < x)
//             l = m + 1;
 
//         // If x is smaller, ignore right half
//         else
//             r = m - 1;
//     }
 
//     // if we reach here, then element was
//     // not present
//     return -1;
// }

int main(){
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int num = 10;
    int result = binarySearch(arr, 0, n - 1, num);
    result == -1 ? printf("Element is not present in array") : printf("Element is present at index %d", result);
    return 0;
}


