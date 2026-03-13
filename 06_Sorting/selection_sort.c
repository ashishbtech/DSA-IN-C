// PROBLEM
// Sort an array using Selection Sort

#include <stdio.h>

void selectionSort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int min_index = i;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min_index])
                min_index = j;
        }

        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    printf("Sorted array:\n");

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

/*
Time Complexity:
Best Case: O(n²)
Average Case: O(n²)
Worst Case: O(n²)

Space Complexity: O(1)
*/