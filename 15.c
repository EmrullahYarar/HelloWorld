#include <stdio.h>

void Hello(char Hello[]){
    printf("%s", Hello);
}

void World(char World[]){
    printf("%s\n", World);

}
int main(){

    char H[]="Hello"; char W[]="World!\n";
    Hello(H); World(W);
    return 0;
}
