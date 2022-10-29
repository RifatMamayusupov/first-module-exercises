#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    char satr[]= "Assalomu   laykum    aziz    mehmonlar ";
    
    for(int i=0; i<strlen(satr); i++){
        if(satr[i]==' ' && satr[i-1]==' '){
            continue;
        }
         printf("%c",satr[i]); 
    }
    return 0;
  }