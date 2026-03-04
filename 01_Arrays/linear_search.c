// time complexity: 0(n)
#include<stdio.h>
int main()
{
    int arr[]={5,3,7,1,9};
    int n=5, key=7;//here i am searching for 7

    for(int i=0; i<n; i++){
        if(arr[i] == key){
            printf("Element found at index %d", i);
            return 0;
        }
    }
    printf("Element not found");
    return 0;
}