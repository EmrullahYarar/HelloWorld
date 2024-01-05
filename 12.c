#include <stdio.h>
#include <string.h>

struct HelloWorld{
    char HelloWorld[1];
};

int main(){

    char HelloWorld[1];
    struct HelloWorld HW[13];

    strcpy(HW[0].HelloWorld, "H");
    strcpy(HW[1].HelloWorld, "e");
    strcpy(HW[2].HelloWorld, "l");
    strcpy(HW[3].HelloWorld, "l");
    strcpy(HW[4].HelloWorld, "o");
    strcpy(HW[5].HelloWorld, " ");
    strcpy(HW[6].HelloWorld, "W");
    strcpy(HW[7].HelloWorld, "o");
    strcpy(HW[8].HelloWorld, "r");
    strcpy(HW[9].HelloWorld, "l");
    strcpy(HW[10].HelloWorld, "d");
    strcpy(HW[11].HelloWorld, "!");

    for(int a=0; a<1; a++){
        printf("%s\n", HW[a].HelloWorld);
    }

    return 0;
}
