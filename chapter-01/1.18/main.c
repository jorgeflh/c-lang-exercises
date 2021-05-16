#include <stdio.h>

#define MAXLINE 1000    // maximum input line lenght

int my_getline(char [], int);
void my_trim(char [], int);

// remove trailing blanks and tabs from each input line
int main() 
{
    int i;
    int len;
    char line[MAXLINE];

    while ((len = my_getline(line, MAXLINE)) > 0) {

        my_trim(line, len);

        for (i = 0; i < len; i++)
            putchar(line[i]);
    }
}

int my_getline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return i;
}

void my_trim(char s[], int length) 
{
    int i;

    // strings in C has an \0 as terminator plus \n as new line character
    // so I am jumping 2 characters in the for initialization
    for (i = length - 2; i >= 0; i--) {
        if (s[i] != ' ' && s[i] != '\t' && s[i]){
            s[i+2] = '\0';
            s[i+1] = '\n';
            break;
        }
    }
}