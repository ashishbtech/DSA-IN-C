// logic to find max and min element from an array
#include <stdio.h>
int main()
{
    int arr[] = {4, 8, 1, 9, 2};
    int n = 5;
    int max = arr[0], min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Max element is %d\nMin element is %d", max, min);
    return 0;
}