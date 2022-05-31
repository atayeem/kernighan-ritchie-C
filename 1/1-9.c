// Replace a string of one or more blanks with a single blank

#include <stdio.h>

int main(void)
{
    int c;
    int wasBlank = 0;

    while ((c = getchar()) != EOF)
    {
        if (!wasBlank)
        {
            putchar(c);
            if (c == ' ' || c == '\t')
                wasBlank = 1;
        }
        else if (c != ' ' && c != '\t')
        {
            wasBlank = 0;
            putchar(c);
        }
    }
}