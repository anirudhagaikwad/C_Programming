/*
Trapping Rain Water Problem.

Given an array of N non-negative integers arr[] representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.
*/

#include <stdio.h>

// Creating MACRO for finding the maximum number
#define max(x, y) (((x) > (y)) ? (x) : (y))

// Creating MACRO for finding the minimum number
#define min(x, y) (((x) < (y)) ? (x) : (y))

// Function to return the maximum
// water that can be stored
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
int main()
{
	int arr[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("%d", maxWater(arr, n));
	return 0;
}
