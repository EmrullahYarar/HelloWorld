//27.c but faster and cleaner. This code uses a single loop for each character in "Hello World!" and prints it directly without unnecessary iterations.

#include <stdio.h>

int main() {
    for (int q = 'H'; q <= 'H'; q++) {
        for (int w = 'e'; w <= 'e'; w++) {
            for (int e = 'l'; e <= 'l'; e++) {
                for (int r = 'l'; r <= 'l'; r++) {
                    for (int t = 'o'; t <= 'o'; t++) {
                        for (int u = ' '; u <= ' '; u++) {
                            for (int i = 'W'; i <= 'W'; i++) {
                                for (int o = 'o'; o <= 'o'; o++) {
                                    for (int p = 'r'; p <= 'r'; p++) {
                                        for (int a = 'l'; a <= 'l'; a++) {
                                            for (int s = 'd'; s <= 'd'; s++) {
                                                for (int x = '!'; x <= '!'; x++) {                                        
                                                    printf("%c%c%c%c%c%c%c%c%c%c%c%c\n", q, w, e, r, t, u, i, o, p, a, s, x);
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

    return 0;
}
