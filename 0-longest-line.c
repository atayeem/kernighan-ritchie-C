// This program has been modified to replace getline() with _getline()

#include <stdio.h>
#define MAXLINE 1000

// these functions are initalized before the main function, then are set after it
int _getline(char line[], int maxline);
void copy(char to[], char from[]);

int main(void)
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    max = 0;

    while ((len = _getline(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }

    if (max > 0) 
        printf("%s", longest);

    return 0;
}

int _getline(char s[],int lim)
{
    int c, i;
    // Stop when i is at the limit, or the character is EOF or newline.
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        // When the array is sent to the function, the function receives the pointer,
        // not a copy of the array, so the function can modify the original array.
        // This is why the return value is used for something else.
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}