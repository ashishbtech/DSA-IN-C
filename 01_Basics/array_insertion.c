//inserting an element at a given position

#include <stdio.h>
int main()
{
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5, position = 2, value = 99;

    for (int i = n; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position] = value;
    n++;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}