// Check a C program for rudimentary syntax errors like unmatched parentheses

// Good enough, other programs might be added to complete it idk
// one problem is that if you write something like )(, it complains about misplaced closing bracket, but not the unclosed bracket
// It does not detect unclosed comments and checks strings (wrong)

#include <stdio.h>

int main(void) 
{
    int i, c;

    int t[5] = {
        0, // 0: () count how many levels deep of these
        0, // 1: []
        0, // 2: {}
        0, // 3: '' if this is 1, there is an unclosed string or char
        0  // 4: ""
    };

    int o[3] = {'(', '[', '{'}; // opening and closing brackets for printing
    int cl[3] = {')', ']', '}'};
    int d[3] = {0, 0, 0}; // check that it hasn't already complained about a closing bracket
    
    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
            case '(': t[0]++; break;
            case ')': t[0]--; break;

            case '[': t[1]++; break;
            case ']': t[1]--; break;

            case '{': t[2]++; break;
            case '}': t[2]--; break;

            case '\'': t[3] = !t[3]; break;
            case '\"': t[4] = !t[4]; break;
        }
        for (i = 0; i <= 2; i++)
            if ((t[i] < 0) && !d[i])
            {
                printf("!: Misplaced closing bracket: \'%c\'\n", cl[i]);
                d[i] = 1;
            }
    }

    // check numbers
    for (i = 0; i <= 2; i++)
        if (t[i] > 0)
            printf("!: Unclosed bracket: \'%c\'\n", o[i]);
    if (t[3])
        printf("!: Unclosed char \'\n");
    if (t[4])
        printf("!: Unclosed string \"\n");
}