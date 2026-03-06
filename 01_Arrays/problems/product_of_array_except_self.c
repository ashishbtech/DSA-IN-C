// Problem — Product of Array Except Self

// Given an array, return a new array where:

// result[i] = product of all elements except arr[i]


#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int left[n], right[n], result[n];

    // Left product
    left[0] = 1;
    for(int i = 1; i < n; i++)
    {
        left[i] = left[i-1] * arr[i-1];
    }

    // Right product
    right[n-1] = 1;
    for(int i = n-2; i >= 0; i--)
    {
        right[i] = right[i+1] * arr[i+1];
    }

    // Final result
    for(int i = 0; i < n; i++)
    {
        result[i] = left[i] * right[i];
    }

    printf("Product array:\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}

/*
Product of Array Except Self

Time Complexity: O(n)
Space Complexity: O(n)
*/