#include <stdio.h>

void HelloWorld(char Hello[], char World[]){

    printf("%s %s", Hello, World);
}

int main (){

    HelloWorld("Hello", "World!\n");

    return 0;
}
