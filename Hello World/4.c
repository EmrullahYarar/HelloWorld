#include <stdio.h>

void HelloWorld(char Hello[], char World[]){

    printf("%s %s", Hello, World);
}

int main (){

    char a[]="Hello"; char b[]="World!\n";
    HelloWorld(a, b);

    return 0;
}
