#include <stdio.h>

int main() {
    int i;

    printf("=== Celsius to Fahrenheit Conversion ===\n");
    for (i = -17; i < 149; i++) {
        printf("%3.1f %3.0d\n", (float)i, (int)(i * 1.8) + 32);
    }
}