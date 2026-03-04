// time complexity: 0(log n)
#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7, key = 4, low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid]== key){
            printf("Element found at index %d ",mid);
            return 0;
        }
        else if(arr[mid]<key){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
        printf("Element not found");
    }
    return 0;
}