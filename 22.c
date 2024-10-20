#include <stdio.h>

void HelloWorld(){

    printf("%c", 72); //H
    printf("%c", 101); //e
    printf("%c", 108); //l
    printf("%c", 108); //l
    printf("%c ", 111); //o

    printf("%c", 87); //W
    printf("%c", 111); //o
    printf("%c", 114); //r
    printf("%c", 108); //l
    printf("%c", 100); //d

}

void exc(){
    printf("%c\n", 33); //!
}

int main(){

    HelloWorld(); exc();

    return 0;
}
