// Use a for loop and decrement instead of increment

#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;   /* lower limit of temperatuire scale */
    upper = 300; /* upper limit */
    step = 20;   /* step size */
    fahr = lower;
    printf("Fahrenheit to Celsius Table\n\n");
    for (fahr = upper; fahr >= lower; fahr -= step) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("\t%3.0f %6.1f\n", fahr, celsius);
    }
} 