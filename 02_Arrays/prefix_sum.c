#include <stdio.h>

/*
    Prefix Sum Implementation in C

    Time Complexity:
        - Building prefix array: O(n)
        - Range sum query: O(1)

    Space Complexity:
        - O(n) (extra prefix array)
*/


// Function to build prefix array
void buildPrefix(int arr[], int prefix[], int n) {
    if (n <= 0)
        return;

    // Base case: first element
    prefix[0] = arr[0];

    // Build prefix using recurrence relation
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
}


// Function to return sum from index L to R (inclusive)
int rangeSum(int prefix[], int n, int L, int R) {

    // Basic validation
    if (L < 0 || R >= n || L > R) {
        printf("Invalid range!\n");
        return -1;
    }

    // If starting from index 0
    if (L == 0)
        return prefix[R];

    // General case
    return prefix[R] - prefix[L - 1];
}


// Utility function to print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main() {

    int arr[] = {5, 2, 8, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int prefix[n];

    // Build prefix array
    buildPrefix(arr, prefix, n);

    printf("Original Array:\n");
    printArray(arr, n);

    printf("Prefix Array:\n");
    printArray(prefix, n);

    // Example range query
    int L = 2, R = 4;

    int result = rangeSum(prefix, n, L, R);

    if (result != -1)
        printf("Sum from index %d to %d = %d\n", L, R, result);

    return 0;
}