// Remove trailing blanks and newlines from each line, and delete blank lines

#define MAXLEN 500

#include <stdio.h>

// Does that and returns whether the line is blank
int removeTrailing(char s[MAXLEN], char out[MAXLEN])
{
    int i;
    for (i = 0; i != '\0'; i++)
    {
        switch (s[i])
        {
            
        }
    }
}

int main(void)
{
    int i, c, l;
    i = 0;
    l = 0;
    char a[MAXLEN];
    char b[MAXLEN];
 
    while ((c = getchar()) != EOF)
    {
        if (c == '\n' || c == '\n')
        {
            a[i] = '\0';
            if (!removeTrailing(a, b))
                printf("%s\n", b);
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