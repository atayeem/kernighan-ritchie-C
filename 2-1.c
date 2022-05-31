#include <limits.h>
#include <stdio.h>

int main(void)
{
    printf("CHAR: %d to %d\nINT: %d to %d\nSIGNED CHAR: %d to %d\nSHORT: %d to %d\nUNSIGNED INT: to %d\n",
    CHAR_MIN, CHAR_MAX, INT_MIN, INT_MAX, SCHAR_MIN, SCHAR_MAX, SHRT_MIN, SHRT_MAX, UINT_MAX);
}