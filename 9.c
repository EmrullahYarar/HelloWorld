#include <stdio.h>
#include <string.h>

struct HelloWorld {
    char HelloWorld[14];
};

int main() {

    struct HelloWorld HW;

    strcpy(HW.HelloWorld, "Hello World!\n");

    printf("%s", HW.HelloWorld);

    return 0;
}
