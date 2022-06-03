// Write the function any(s1,s2) which returns the first location in a string s1 where any character from
// the string s2 occurs, or -1 if s1 contains no characters from s2.

#include <stdio.h>

int any(char s1[], char s2[])
{
    int w = -1; // where was the character found?
    int i, j; // increment

    for (i = 0; s1[i] != '\0'; i++)
        for (j = 0; s2[j] != '\0'; j++)
            if (s1[i] == s2[j])
                w = i;
    
    return w;
}

int main()
{
    char str1[34] = "The 'v' is at the 5th position.";
    char str2[25] = "There is no such letter.";

    char filter[2] = "v";

    printf("str1: %d\nstr2: %d\n", any(str1, filter), any(str2, filter));
}