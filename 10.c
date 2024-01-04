#include <stdio.h>
#include <stdlib.h>

FILE * fptr;

int main(){

char fileLine[100];
fptr = fopen("/home/emrullah/Genel/C/Hello World/HelloWorld.txt","r");
if (fptr != 0){
    while (!feof(fptr)){
        fgets(fileLine, 100, fptr);

            if (!feof(fptr)){
                puts(fileLine);
            }
        }
    }
            else{
                printf("\nError opening file.\n");
            }

fclose(fptr);

return(0);
}
