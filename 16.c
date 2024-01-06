#include <stdio.h>

int main(){

    char HelloWorld[13];
    HelloWorld[0]= 'H'; HelloWorld[1]= 'e'; HelloWorld[2]= 'l';
    HelloWorld[3]= 'l'; HelloWorld[4]= 'o'; HelloWorld[5]= ' ';
    HelloWorld[6]= 'W'; HelloWorld[7]= 'o'; HelloWorld[8]= 'r';
    HelloWorld[9]= 'l'; HelloWorld[10]= 'd'; HelloWorld[11]= '!';
    HelloWorld[12]= '\n';

    printf("%c", HelloWorld[0]);
    printf("%c", HelloWorld[1]);
    printf("%c", HelloWorld[2]);
    printf("%c", HelloWorld[3]);
    printf("%c", HelloWorld[4]);
    printf("%c", HelloWorld[5]);
    printf("%c", HelloWorld[6]);
    printf("%c", HelloWorld[7]);
    printf("%c", HelloWorld[8]);
    printf("%c", HelloWorld[9]);
    printf("%c", HelloWorld[10]);
    printf("%c", HelloWorld[11]);
    printf("%c", HelloWorld[12]);

    return 0;
}
