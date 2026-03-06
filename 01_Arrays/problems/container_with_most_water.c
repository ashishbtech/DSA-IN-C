#include <stdio.h>

int min(int a, int b)
{
    if(a < b)
        return a;
    return b;
}

int main()
{
    int arr[] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    int left = 0;
    int right = n - 1;

    int max_area = 0;

    while(left < right)
    {
        int width = right - left;
        int height = min(arr[left], arr[right]);

        int area = width * height;

        if(area > max_area)
            max_area = area;

        if(arr[left] < arr[right])
            left++;
        else
            right--;
    }

    printf("Maximum water container area = %d\n", max_area);

    return 0;
}

/*
Container With Most Water

Time Complexity: O(n)
Space Complexity: O(1)
*/