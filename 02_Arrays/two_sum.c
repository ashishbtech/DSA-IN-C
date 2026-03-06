// PROBLEM
// Given an array and a target number, find two elements whose sum equals the target.
// Array: 2 7 11 15
// Target: 9
// We need two numbers whose sum is 9.
// 2 + 7 = 9
// Indices are 0 and 1.

#include <stdio.h>
void twoSum(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("Pair is founded at %d and %d\n", i, j);
                printf("Numbers are %d and %d\n", arr[i], arr[j]);
                return;
            }
        }
    }
    printf("No pair founded.\n");
}

int main()
{
    int arr[] = {2, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 13; // main part i am using for get the sum of 13
    twoSum(arr, n, target);
    return 0;
}

/*
    Two Sum Problem (Brute Force)

    Time Complexity:
        O(n^2)

    Space Complexity:
        O(1)
*/