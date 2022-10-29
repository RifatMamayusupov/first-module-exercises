// it is very fast and easy way to delete the space.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    char satr1[]="Salom   ha   mma ga   ma   ma g   apla osh   nalar";

    for(int i=0; i<strlen(satr1); i++){
        if(satr1[i]==' ' &&  satr1[i-1] == ' '){
                continue;
        }
        printf("%c",satr1[i]);
    }

    return 0;
}

// it is done;  H F S ER T F A D B 