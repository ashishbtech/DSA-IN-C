/*
    PROBLEM
    Search an element in a sorted array using Binary Search
*/

#include <stdio.h>

int binarySearch(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;

    while(left <= right)
    {
        int mid = (left + right) / 2;

        if(arr[mid] == target)
            return mid;

        else if(target > arr[mid])
            left = mid + 1;

        else
            right = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[] = {2,4,6,8,10,12,14};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 10;

    int index = binarySearch(arr, n, target);

    if(index != -1)
        printf("Element found at index %d", index);
    else
        printf("Element not found");

    return 0;
}

/*
Time Complexity: O(log n)
Space Complexity: O(1)
*/