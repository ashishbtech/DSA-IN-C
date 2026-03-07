// Palindrome String
// Problem

// Check whether a string is a palindrome.

// A palindrome reads the same forward and backward.

#include <stdio.h>

int stringLength(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int isPalindrome(char str[]) {

    int left = 0;
    int right = stringLength(str) - 1;

    while (left < right) {

        if (str[left] != str[right]) {
            return 0;
        }

        left++;
        right--;
    }

    return 1;
}

int main() {

    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}

// Time Complexity = O(n)
// Space Complexity = O(1)

