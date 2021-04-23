#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr= 0, 20, ..., 300 */

#define LOWER   0   // lower limit of temperature scale 
#define UPPER   300 // upper limit 
#define STEP    20  // step size

int convert_celsius(int);

int main() 
{
    int fahr, celsius;

    fahr = LOWER;
    while (fahr <= UPPER) { 
        printf("%d\t%d\n", fahr, convert_celsius(fahr));
        fahr = fahr + STEP;
    }
}

int convert_celsius(int fahr) {
    int celsius;

    celsius = 5 * (fahr - 32) / 9;
    return celsius;
}