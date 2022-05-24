#include <stdio.h>

int main()
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