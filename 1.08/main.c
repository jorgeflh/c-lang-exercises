#include <stdio.h>

int main() {
    int c, blanks, tabs, newlines;

    blanks = 0;
    tabs = 0;
    newlines = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++newlines;
        else if (c == ' ')
            ++blanks;
        else if (c == '\t')
            ++tabs;
    }

    printf("blanks: %d tabs: %d newlines: %d\n", blanks, tabs, newlines);

    return 0;
}