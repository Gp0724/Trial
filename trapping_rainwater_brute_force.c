// Given an array of N non-negative integers arr[] representing an elevation map where 
// the width of each bar is 1, compute how much water it is able to trap after the rain.

// Gautam

// Input Format
// 12 // Length of array
// 0
// 1
// 0
// 2
// 1
// 0
// 1
// 3
// 2
// 1
// 2
// 1
// 6

// Output Format
// 6

#include <stdio.h>
#define max(x, y) (((x) > (y)) ? (x) : (y))
#define min(x, y) (((x) < (y)) ? (x) : (y))
int maxWater(int arr[], int n)
{
    // To store the maximum water
    int res = 0;
  
    // For every element of the array
    for (int i = 0; i < n; i++) {
  
        // Find the maximum element on its left
        int left = arr[i];
        for (int j = 0; j < i; j++) {
            left = max(left, arr[j]);
        }
  
        // Find the maximum element on its left
        int right = arr[i];
        for (int j = i + 1; j < n; j++) {
            right = max(right, arr[j]);
        }
  
        // Update the result (maximum water)
        res = res + (min(left, right) - arr[i]);
    }
    // Return the maximum water
    return res;
}
// Driver code
int main()
{
    int num;

    scanf("%d", &num); 

    int arr[num];

    for(int i = 0; i < num; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("%d", maxWater(arr, num));

    return 0;
}
