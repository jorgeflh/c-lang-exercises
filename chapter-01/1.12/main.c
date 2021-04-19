#include <stdio.h>

#define IN  0   
#define OUT 1

int main() { 
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t' || c == ' ' || c == '\n') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            putchar('\n');
        }

        if (state == IN) {
            putchar(c);
        }
    }    
    putchar('\n');

    return 0;

}