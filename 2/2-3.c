// Write a function htoi(s) which converts a string of hexadecimal digits into an integer

#include <stdio.h>

unsigned int htoi(char s[])
{
    int i = 0; // where is the pointer
    int end;
    unsigned int o = 0; // the number

    for (end = 0; s[end] != '\0'; end++); // seek NULL terminator
    
    while (i != end)
    {
        if (
        (('0' <= s[i]) && (s[i] <= '9')) ||
        (('a' <= s[i]) && (s[i] <= 'f')) || 
        (('A' <= s[i]) && (s[i] <= 'F'))) 
        {
            o <<= 4;
            if (('0' <= s[i]) && (s[i] <= '9'))
                o |= (s[i] - '0');

            if (('a' <= s[i]) && (s[i] <= 'f')) 
                o |= (s[i] - 'a') + 10;

            if (('A' <= s[i]) && (s[i] <= 'F'))
                o |= (s[i] - 'A') + 10; 
        }
        i++;
    }

    return o;
}

int main()
{
    char hex1[11] = "0xBEEF1337";
    char hex2[11] = "DADbeeF4";
    char hex3[11] = "faaf";
    char hex4[11] = "D?aBcDeF36";

    printf("%x\n%x\n%x\n%x\n", htoi(hex1), htoi(hex2), htoi(hex3), htoi(hex4));
}