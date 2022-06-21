// Write a function invert(x,p,n) that returns x with the n bits that begin at
// position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.

#define INT_S sizeof(int) * 8
#define R INT_S - (p + n)

int invert(int x, int p, int n)
{
    int l = (x >> INT_S - p) << INT_S - p;      // 12300000
    int m = (x << p) >> p;                      // FFF45678
        m = (m >> R) << R;                      // FFF45600
        m |= ~((-1 >> R) << R);                 // FFF456FF
        m = ~m;                                 // 000CBA00
    int e = (x << )
}