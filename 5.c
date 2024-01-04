#include <stdio.h>

void HelloWorld(char HelloWorld[]){

    printf("%s", HelloWorld);
}

int main (){

    char a[]="Hello World!\n";
    HelloWorld(a);

    return 0;
}
