// Write an alternative version of squeeze(s1, s2) that deletes any character in s1 that matches any character in s2

#include <stdio.h>

/* squeeze: delete all c from s */
void squeeze(char s[], char c[])
{
    int i; // read position
    int j; // write position
    int k; // position in c
    int b = 1; // should this be written?

    for (i = j = 0; s[i] != '\0'; i++)
    {
        for (k = 0; c[k] != '\0'; k++)
            if (s[i] == c[k])
                b = 0;
        if (b)
            s[j++] = s[i];
        b = 1;
    }
    s[j] = '\0';
}

int main()
{
    char vowels[6] = "aeiou";
    char string[56] = "This is a normal sentence, with no oddities whatsoever.";

    squeeze(string, vowels);
    printf("%s\n", string);
}