// Anagram Check
// Problem
// Check whether two strings are anagrams.
// Two strings are anagrams if they contain the same characters with the same frequency, but possibly in a different order.


#include <stdio.h>

int isAnagram(char str1[], char str2[]) {

    int freq[256] = {0};

    int i = 0;

    while(str1[i] != '\0') {
        freq[str1[i]]++;
        i++;
    }

    i = 0;

    while(str2[i] != '\0') {
        freq[str2[i]]--;
        i++;
    }

    for(int i = 0; i < 256; i++) {
        if(freq[i] != 0)
            return 0;
    }

    return 1;
}

int main() {

    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if(isAnagram(str1, str2))
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}

/*

Time Complexity: O(n)
Space Complexity: O(1)
*/