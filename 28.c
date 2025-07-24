#include <stdio.h>

int main() {
    for (int i = 0; i < 12; i++) {
        char c;
        if (i == 0) c = 'H';
        else if (i == 1) c = 'e';
        else if (i == 2 || i == 3) c = 'l';
        else if (i == 4) c = 'o';
        else if (i == 5) c = ' ';
        else if (i == 6) c = 'W';
        else if (i == 7) c = 'o';
        else if (i == 8) c = 'r';
        else if (i == 9) c = 'l';
        else if (i == 10) c = 'd';
        else if (i == 11) c = '!';
        printf("%c", c);
    }
    printf("\n");
    return 0;
}
