#include <stdio.h>

#define MAXLINE 1000 // maximum input line length 
#define DELIMITER 80 // delimiter the line lenght to be printed

int my_getline(char [], int);

/* print lines longer than 80 characters */
int main() 
{
    int len;            // current line length
    char line[MAXLINE]; // current input line
    int i;              // counter

    while((len = my_getline(line, MAXLINE)) > 0) {
        if (len > DELIMITER) {
            for (i = 0; i < len; i++)
                putchar(line[i]);

            putchar('\n');
        }
    }

    return 0;
}

int my_getline(char s[], int lim) 
{
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    if (c == '\n') {
         s[i] = c;
         ++i;
    }

    s[i] = '\0';

    return i;
}