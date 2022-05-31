// Count the number of tabs, newlines, and blanks

#include <stdio.h>

int main(void)
{
    int c, tabs, newlines, blanks;
    tabs = 0;
    newlines = 0;
    blanks = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n') newlines++;
        if (c == '\t') tabs++;
        if (c == ' ')  blanks++;
    }
    blanks += tabs;
    printf("tabs: %d\nnewlines: %d\nblanks: %d\n", tabs, newlines, blanks);
}