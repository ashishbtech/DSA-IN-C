#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[] = {10, 20, 5, 8, 25};
    int n = 5;
    int largest = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }
    printf("Second largest =%d", second);
    return 0;
}