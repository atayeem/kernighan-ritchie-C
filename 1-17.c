// Print lines that are longer than 80 characters

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
            if (i > 80)
                printf("%s\n", a);
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