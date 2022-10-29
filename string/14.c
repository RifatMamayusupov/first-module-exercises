#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  int main (){
     char satr[]="UZbekIstON";

     for(int i=0; i<strlen(satr); i++){
        for(int j=65; j<=90; j++){
            if(satr[i]==j){
                printf("%c ",satr[i]);
            }
        }
     }
     return 0;
  }