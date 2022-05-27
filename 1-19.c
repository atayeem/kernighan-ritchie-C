// Create a function reverse(s) that reverses the string s,
// then write a program to reverse the input a line at a time

#define MAXLEN 500

#include <stdio.h>

void reverse(char s[MAXLEN], char out[MAXLEN], int len);

int main(void)
{
    int i, c, l;
    i = 0;
    l = 0;
    char a[MAXLEN];
    char reversed[MAXLEN];
 
    while ((c = getchar()) != EOF)
    {
        if (c == '\n' || c == '\n')
        {
            a[i] = '\0';
            reverse(a, reversed, i);
            printf("%s\n", reversed);
            i = 0;
        } 
        else
        {
            if (!(i >= MAXLEN))
            {
                a[i] = c;
                i++;
            }
        }
    }
}

void reverse(char s[MAXLEN], char out[MAXLEN], int len)
{
    int i;
    
    // Second pass, write to output array backwards
    for (i = 0; i < len; i++)
        out[len - 1 - i] = s[i];
    out[len] = '\0';
}