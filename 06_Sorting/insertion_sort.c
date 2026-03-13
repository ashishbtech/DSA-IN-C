// PROBLEM
// Sort an array using Insertion Sort
#include <stdio.h>

void insertionSort(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {5, 2, 4, 6, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    printf("Sorted array:\n");

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

/*
Time Complexity:
Best Case: O(n)
Average Case: O(n²)
Worst Case: O(n²)

Space Complexity: O(1)
*/













