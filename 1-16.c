// Print the length of input lines of any length, and as much text as possible

#define MAXLEN 500

#include <stdio.h>

int main(void)
{
    int i, c, l;
    i = 0;
    l = 0;
    char a[MAXLEN];
 
    while ((c = getchar()) != EOF)
    {
        if (c == '\n' || c == '\n')
        {
            a[i] = '\0';
            printf("%d: %s\n", i, a);
            i = 0;
        } 
        else
        {
            if (!(i >= MAXLEN))
                a[i] = c;
            i++;
        }
    }
}