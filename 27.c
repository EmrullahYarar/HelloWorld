//This code tries every possibility to write "Hello World!". So, it takes a while to run. Honestly, i couldnt see the result. I think you need a fast pc.
//It uses integers and ASCII values of characters to print "Hello World!".

#include <stdio.h>

int main() {
    for (int q = 0; q <= 72; q++) {
        for (int w = 0; w <= 101; w++) {
            for (int e = 0; e <= 108; e++) {
                for (int r = 0; r <= 108; r++) {
                    for (int t = 0; t <= 111; t++) {
                        for (int u = 0; u <= 32; u++) {
                            for (int i = 0; i <= 87; i++) {
                                for (int o = 0; o <= 111; o++) {
                                    for (int p = 0; p <= 114; p++) {
                                        for (int a = 0; a <= 108; a++) {
                                            for (int s = 0; s <= 100; s++) {
                                                for (int x = 0; x <= 33; x++) {
                                                    printf("%c%c%c%c%c%c%c%c%c%c%c%c\n", q, w, e, r, t, u, i, o, p, a, s, x);
                                                    if (q == 'H' && w == 'e' && e == 'l' && r == 'l' && t == 'o' &&
                                                        u == ' ' && i == 'W' && o == 'o' && p == 'r' &&
                                                        a == 'l' && s == 'd' && x == '!') {      
                                                    return 0;                                                  
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
