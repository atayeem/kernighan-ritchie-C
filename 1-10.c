// Replace newline with \n, backslash with \\, and backspace (?) with \b

#include <stdio.h>

int main(void)
{
    int c;

    while ((c = getchar()) != EOF)
    {
        switch (c) 
        {
            case '\n':
                putchar('\\');
                putchar('n');
                break;
            case '\b':
                putchar('\\');
                putchar('b');
                break;
            case '\\':
                putchar('\\');
                putchar('\\');
                break;
            default:
                putchar(c);
                break;
        }
    }
    putchar('\n');
}