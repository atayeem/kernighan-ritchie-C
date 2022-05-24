// Show that getchar() != EOF is equal to 0 or 1

#include <stdio.h>

// if you type anything, this program prints "1", but if you press CTRL + D, it prints 0.
// weird solution but I don't know how else to do it

int main(void)
{
    printf("%d\n", getchar() != EOF);
}