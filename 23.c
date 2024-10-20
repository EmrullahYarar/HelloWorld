#include <stdio.h>

void H(){
    printf("%c", 72); //H
}

void e(){
    printf("%c", 101); //e
}
void l(){
    printf("%c", 108); //l
}

void o(){
    printf("%c", 111); //o
}

void blank(){
    printf("%c", 32);
}

void W(){
    printf("%c", 87); //W
}

void r(){
    printf("%c", 114); //r
}

void d(){
    printf("%c", 100); //d
}

void exc(){
    printf("%c\n", 33); //!
}

int main(){

    H(); e(); l(); l(); o(); blank(); W(); o(); r(); l(); d(); exc();

    return 0;
}
