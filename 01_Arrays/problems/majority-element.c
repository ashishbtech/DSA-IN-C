// Problem — Majority Element
// Given an array, find the element that appears more than n/2 times.
// Example:
// Array: [2,2,1,1,1,2,2]
// Output:
// 2
// Because:
// 2 appears 4 times
// Array size = 7
// 7/2 = 3.5
// Boyer-Moore Voting Algorithm

#include <stdio.h>
int main()
{
    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int candidate = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = arr[i];
        }
        if (arr[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    printf("Majority Element =%d\n", candidate);
    return 0;
}