#include <stdio.h>

void HelloWorld(char HelloWorld[]){

    printf("%s", HelloWorld);
}

int main (){

    char HW[]="Hello World!\n";
    HelloWorld(HW);

    return 0;
}
