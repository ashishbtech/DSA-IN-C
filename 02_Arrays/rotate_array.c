// PROBLEM
// Given an array, rotate it to the right by k positions.
// So rotation means:

// 👉 Elements move forward
// 👉 Last elements wrap to the front
#include <stdio.h>
void rotateArray(int arr[], int n, int k)
{
    int temp[n];

    for (int i = 0; i < n; i++)
    {
        int new_index = (i + k) % n;
        temp[new_index] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }

    printf("Rotated array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = 2;

    rotateArray(arr, n, k);
    return 0;
}

/*
    Rotate Array

    Time Complexity:
        O(n)

    Space Complexity:
        O(n)
*/