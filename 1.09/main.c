#include <stdio.h>

int main() {
    int c, flag;

    flag = 0;
    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            if (flag == 1) {
                putchar(' ');
                flag = 0;
            }

            if (flag == 0) {
                putchar(c);
            }
        }

        if (c == ' ') {
            flag = 1;
        }
    }
    return 0;
}