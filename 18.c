#include <stdio.h>

int main(){

    char HelloWorld[14]=("Hello World!\n");

    for(int i=0; i<=14; i++){
        printf("%c", HelloWorld[i]);
    }
    return 0;
}
