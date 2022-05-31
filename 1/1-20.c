// Replace tabs with spaces until the next tab stop
// Seems to work well enough can't be bothered to test it

#include <stdio.h>

// It should be a variable instead of a symbolic constant because the end user
// may want to change the tab stop interval.
const int tab_stop_interval = 5;

int main(void)
{
    int c;
    int i; // counter

    while ((c = getchar()) != EOF)
    {
        i++;
        switch (c)
        {
            case '\n':
                i = 0;
                putchar('\n');
                break;
            case '\t':
                while (i % (tab_stop_interval)) // if i is divisible by tab_stop_interval, stop
                {
                    putchar(' ');
                    i++;
                }
                break;
            default:
                putchar(c);

        }
    }
}