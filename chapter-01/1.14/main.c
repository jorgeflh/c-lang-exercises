#include <stdio.h>

#define MAXLEN  255     /* Max quantity of chars array */

int main() 
{
    int c, i, j;
    int chars[255];

    for (i = 0; i < MAXLEN; ++i) {
        chars[i] = 0;
    }

    while((c = getchar()) != EOF) {
        chars[c]++;
    }

    printf("Histogram of the frequencies of characters in a text\n");
    for (i = 0; i < MAXLEN; ++i) {
        if (chars[i] == 0)
            continue;

        // I'm verifying the most common special characters. 
        // You could increase this list if you want
        if (i == (int)'\n') {
            printf("[\\n] : ");
        } else if (i == (int)'\t') {
            printf("[\\t] : ");
        } else if (i == (int)'\b') {
            printf("[\\b] : ");
        } else {
            printf("[%2c] : ", i);
        }
        
        for (j = 0; j < chars[i]; ++j) 
            putchar('|');
        putchar('\n');
    }

    return 0;
}