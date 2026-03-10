// Character Frequency in a String
// Problem

// Count the frequency of each character in a string.


#include <stdio.h>

int main()
{
    char str[100];
    int freq[256] = {0};

    printf("Enter a string : ");
    scanf("%s", str);

    int i = 0;

    while (str[i] != '\0')
    {
        freq[str[i]]++;
        i++;
    }

    printf("Character Frequencies: \n");
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c -> %d\n", i, freq[i]);
        }
    }
    return 0;
}

//Time Complexity O(n)
//Space Complexity O(1)