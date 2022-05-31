// Create a histogram of the frequencies of different characters in the input

#include <stdio.h>

int main(void)
{
    int c;
    int i, j;
    int freqs[26];
    int a = 'a';
    int A = 'A';
    for (i = 0; i < 26; i++)
        freqs[i] = 0; 
    
    while ((c = getchar()) != EOF)
    {
        if ('A' <= c && c <= 'Z') // is it uppercase?
            freqs[c - 'A']++;
        else if ('a' <= c && c <= 'z') // is it lowercase?
            freqs[c - 'a']++;
    }

    // horizontal

    for (i = 0; i < 26; i++)
    {
        printf("%c: ", 'A' + i);
        for (j = 0; j < freqs[i]; j++)
            putchar('#');
        putchar('\n');
    }

}