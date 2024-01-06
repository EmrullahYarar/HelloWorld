#include <stdio.h>

void Hello(){
    char Hello[]= "Hello";
    printf("%s", Hello);
}

void World(){
    char World[]= " World";
    printf("%s\n", World);

}
int main(){

    Hello(); World();
    return 0;
}
