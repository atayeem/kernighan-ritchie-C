#include <stdio.h>

// if you type anything, this program prints "1", but if you press CTRL + D, it prints 0.
// terrible solution but I don't know how to program

main()
{
    printf("%d\n", getchar() != EOF);
}