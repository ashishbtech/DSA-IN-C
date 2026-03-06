// Problem
// Given an array, move all zeroes to the end while keeping the relative order of non-zero elements the same.
#include <stdio.h>

int main()
{
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    int insert_pos = 0;

    // move non-zero elements to front
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[insert_pos] = arr[i];
            insert_pos++;
        }
    }

    // fill remaining postions with zero
    while (insert_pos < n)
    {
        arr[insert_pos] = 0;
        insert_pos++;
    }

    printf("Array after moving zeroes:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

/*
Move Zeroes

Time Complexity: O(n)
Space Complexity: O(1)
*/