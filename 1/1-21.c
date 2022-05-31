// Replace strings of blanks by the minimum number of tabs and spaces to fill the area

// STOPS: ----|----|----|----|----|----|
//  TEXT: This-is-a-test------test-------test
// AFTER: This-is-a-test|____|test|____|-test

// I tested this on this program, and it correctly replaces the "tabs" with tabs, could be useful

#include <stdio.h>

int tab_stop_interval = 4;

int main(void)
{
    int c;
    int i; // counter
    int j; // for the for loop
    int start = -1;
    int stop = -1; // where does the series of spaces start and stop?

    while ((c = getchar()) != EOF)
    {
        i++;
        switch (c)
        {
            case '\n':
                i = 0;
                putchar('\n');
                start = -1;
                stop = -1;
                break;
            case ' ':
                if (start == -1) // if start wasn't set, set it
                    start = i;
                break;
               default:
                if ((start != -1) && (stop == -1)) // if start was set, and stop wasn't set, put the stop here
                    stop = i - 1;

                // it happens here
                
                if ((start == stop) && (start != -1)) // if both were set and they are equal, just put a space
                    putchar(' ');
                else
                {
                    // this puts tabs before every tab stop, and puts spaces if it sees that it can't fit another
                    // I don't know why but I have to write start - tab_stop_interval or it doesn't work
                    for (j = start - tab_stop_interval; (j + tab_stop_interval) <= stop; j++)
                    {
                        if (!(j % tab_stop_interval))
                        {
                            putchar('\t');
                        }
                    }
                    for (j = 0; j < (stop % tab_stop_interval); j++)
                        putchar(' ');
                }
                start = -1;
                stop = -1;

                putchar(c);
                break;
        }
    }
}