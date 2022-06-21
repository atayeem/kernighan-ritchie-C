// Write a function setbits(x,p,n,y) that returns x with the n bits that begin at
// position p set to the rightmost n bits of y, leaving the other bits unchanged.

// ---- length is n
// x: 11010011
//      ^^^^
//      p---
// y: 00001100
//        ^^^^
//        ----
// o: 11110011
//      ^^^^

#include <stdio.h>

#define INT_SIZE sizeof(int) * 8

int setbits(x,p,n,y)
{
    int o = x; // output
    y >>= (INT_SIZE - n); // cut y
    int m = -1; // mask, set all ones
    m >>= (INT_SIZE - n); // make the number of ones equal to n
    m <<= p + n; // move it to the right position
    o &= ~m; // set that area to zero
    o |= (y << (p + n)); // set area to the right value
    return o;
}

int main()
{
    printf("%x", setbits(0xFFFFFFFF, 4, 4, 0));
}