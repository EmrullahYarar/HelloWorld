#include <stdio.h>
#include <string.h>

struct HelloWorld {
    char Hello[10];
    char World[10];
};

int main() {

    struct HelloWorld HW;

    strcpy(HW.Hello, "Hello");
    strcpy(HW.World, "World!\n");

    printf("%s %s", HW.Hello, HW.World);

    return 0;
}
