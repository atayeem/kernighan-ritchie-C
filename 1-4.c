// Make it go the other way (C -> F instead of F -> C)

#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    /* lower limit of temperatuire scale */
    /* upper limit */
    /* step size */
    celsius = lower;
    printf("Celsius to Fahrenheit Table\n\n");
    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32.0;
        printf("\t%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}