// write the same for loop but without && or ||

#include <stdio.h>

#define MAXLEN 1000

int _getline(char s[], int lim)
{
    int i, c;

    // booleans are ints that are 0 or 1, so multiplying is the same truth table as &&
    // 0x0 = 0, 0x1 = 0, 1x1 = 1
    for (i = 0; (i < lim-1) * ((c=getchar()) != '\n') * (c != EOF); ++i)
        s[i] = c;
    
    return i;
}