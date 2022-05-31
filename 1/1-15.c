// Convert Fahrenheit to Celsius, but with a function

#include <stdio.h>

float convert(float fahr)
{
    return (5.0/9.0) * (fahr-32.0);
}

int main(void)
{
    float fahr;
    float lower, upper, step;
    lower = 0;   /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 20;   /* step size */
    fahr = lower;
    printf("Fahrenheit to Celsius Table\n\n");
    while (fahr <= upper) {
        printf("\t%3.0f %6.1f\n", fahr, convert(fahr));
        fahr = fahr + step;
    }
}