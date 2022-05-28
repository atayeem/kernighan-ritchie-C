// Remove trailing blanks and newlines from each line, and delete blank lines

#define MAXLEN 500

#include <stdio.h>

// Does that and returns whether the line is blank
int removeTrailing(char s[MAXLEN])
{
    // it's an empty line, don't bother
    if (s[0] == '\0')
        return 1;

    // Find when the trailing blanks start, then on a second pass remove them
    int i;
    int where = -1;
    int len = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        len++;
        // if it's a blank, then the trailing starts there. If a normal character is found,
        // reset it. It will only set where the trailing starts if it wasn't already set
        switch (s[i])
        {
            case ' ':
            case '\t':
                if(where == -1)
                    where = i;

                //*debug*/ printf("%d: where: %3d, char: %2c blank-post\n", i, where, s[i]);
                break;
            default:
                where = -1;
                //*debug*/ printf("%d: where: %3d, char: %2c char-post\n", i, where, s[i]);
                break;
        }
    }

    // No need to cut a string if it won't be printed
    if (where == 0)
        return 1;

    // Second pass, set blanks to null
    if (where != -1)
    {
        for (i = where; i <= len; i++)
        {
            s[i] = '\0';
            //*debug*/ printf("%d: set %d to NULL\n", i, i);
        }
    }

    // If it isn't blank, it isn't blank.
    return 0;
}

int main(void)
{
    int i, c, l;
    i = 0;
    l = 0;
    char a[MAXLEN];
 
    while ((c = getchar()) != EOF)
    {
        if (c == '\n' || c == EOF)
        {
            a[i] = '\0';
            if (!removeTrailing(a))
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