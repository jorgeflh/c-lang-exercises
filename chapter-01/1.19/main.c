#include <stdio.h>

#define MAXLINE 1000 // maximum input line length

int my_getline(char [], int);
void reverse_line(char [], int);

// Invert one line at a time
int main()
{
    int i;
    int len;
    char line[MAXLINE];

    while ((len = my_getline(line, MAXLINE)) > 0) {
        reverse_line(line, len);

        for (i = 0; i < len; i++)
            putchar(line[i]);
    }
}

int my_getline(char s[], int lim) 
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return i;
}

void reverse_line(char s[], int length)
{
    char temp;
    int i, j;

    // Here I'm swaping the first char with the last char until i < j
    // This will reverse the line
    for (i = 0, j = length - 2; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}