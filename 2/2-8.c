// Write a function rightrot(x,n) that returns the value of the integer x rotated
// to the right by n positions.

#define INT_SIZE sizeof(int) * 8
#include <stdio.h>

int rightrot(int x, int n)
{
    int o = x, prev;
    n %= INT_SIZE; // no need to go around multiple times
    prev = o;                   // 12345678
    o >>= n;                    // FFF12345 
    o &= ~(-1 << INT_SIZE - n); // 00012345 (masked by FFF00000 from FFFFFFFF (-1))
    prev <<= INT_SIZE - n;      // 67800000
    o |= prev;                  // 67812345

    return o;
}

int main()
{
    int i;
    for (i = 0; i <= 64; i+=4)
        printf("%08x\n",  rightrot(0xDEADBEEF, i));
}