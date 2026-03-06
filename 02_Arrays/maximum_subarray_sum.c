// PROBLEM

// Find the maximum sum of a contiguous subarray.

#include <stdio.h>

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = 9;

    int current_sum = arr[0];
    int max_sum = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > current_sum + arr[i])
        {
            current_sum = arr[i];
        }
        else
        {
            current_sum = current_sum + arr[i];
        }
        if (current_sum > max_sum)
        {
            max_sum = current_sum;
        }
    }
    printf("Maximum subarray sum = %d", max_sum);

    return 0;
}

// Time Complexity = O(n)
// Space Complexity = O(1)
// Implemented Maximum Subarray Sum using Kadane's Algorithm