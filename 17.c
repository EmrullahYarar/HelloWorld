#include <stdio.h>

int main(){

    char HelloWorld[13];

    HelloWorld[0]= 'H'; HelloWorld[1]= 'e'; HelloWorld[2]= 'l';
    HelloWorld[3]= 'l'; HelloWorld[4]= 'o'; HelloWorld[5]= ' ';
    HelloWorld[6]= 'W'; HelloWorld[7]= 'o'; HelloWorld[8]= 'r';
    HelloWorld[9]= 'l'; HelloWorld[10]= 'd'; HelloWorld[11]= '!';
    HelloWorld[12]= '\n';

    char *HW = &HelloWorld[0];

    printf("%s", HW);

    return 0;
}
