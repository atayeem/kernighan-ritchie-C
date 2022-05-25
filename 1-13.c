// Create a histogram of the lengths of words in the input

#include <stdio.h>

int main(void)
{
    int c;
    int lens[16];
    int len = 0;
    int i, j;
    for (i = 0; i <= 16; i++)
        lens[i] = 0; // make sure there's stuff in memory (weird effects when there isn't)
    
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n')
        {
            if (len > 15)
                lens[15]++; // don't try to write outside the array
            else
            {
                lens[len]++;
                len = 0;
            }
        }
        else
            len++;
    }

    // horizontal
    /*
    for (i = 0; i < 16; i++)
    {
        printf("%2d: ", i);
        for (j = 0; j < lens[i]; j++)
            putchar('#');
        putchar('\n');
    }
    */

    // vertical
    for (i = 10; i >= 0; i--)
    {
        printf("%2d ", i);
        for (j = 0; j < 16; j++)
        {
            if (lens[j] > i)
                putchar('#');
            else
                putchar(' ');
        }
    putchar('\n');
    }
}