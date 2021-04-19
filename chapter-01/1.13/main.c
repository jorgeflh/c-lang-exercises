#include <stdio.h>

#define IN  1;      /* Inside word */
#define OUT 0;      /* outside word */

#define MAX 50      /* Max lenght of a word */

/* Histogram of lengths of words in its input. Horizontal Bars version */
int main() 
{
    int c, i, j, lenght_store[50], state, word_lenght;

    for (i = 0; i < MAX; ++i)
        lenght_store[i] = 0;

    state = OUT;
    word_lenght = 0;
    while ((c = getchar()) != EOF) {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            state = IN;
            ++word_lenght;
        } else {           

            /* Avoid count other characters as word with zero lenght */
            if (word_lenght > 0 && word_lenght < MAX)
                lenght_store[word_lenght]++;

            state = OUT;
            word_lenght = 0;
        }
    }

    printf("Histogram of word lenght\n\n");

    /* Start print from index 1 */
    for (i = 1; i < MAX; ++i) {
        printf("[%2d] : ", i);
        for (j = 0; j < lenght_store[i]; ++j)
            putchar('|');

        putchar('\n');
    }
    return 0;
}