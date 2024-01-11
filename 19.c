#include <stdio.h>

int main(){

    char HelloWorld[14]={'H','e','l','l','o',' ','W','o','r','l','d','!','\n'};

    for(int i=0; i<=14; i++){
        printf("%c", HelloWorld[i]);
    }
    return 0;
}
