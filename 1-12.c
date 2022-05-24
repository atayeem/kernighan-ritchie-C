// Print one word per line

#include <stdio.h>

int main(void)
{
    int c;

    while ((c = getchar()) != EOF)
    {
        switch (c) {
            case ' ':
                putchar('\n');
                break;
            default:
                putchar(c);
                break;
        }
    }
}