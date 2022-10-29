#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (){

    FILE *filepointer;

    filepointer=fopen("19ex.txt", "a+");
   
   char satr[100]="KO'CHADA OLAMA qani ma nga";

   for(int i=0; i<strlen(satr); i++){
    if(satr[i]>=65  && satr[i]<=91){
        satr[i]+=32;
    }else if(satr[i]>=97  && satr[i]<=123){
         satr[i]-=32;
     }
     fputc(satr[i],filepointer);
   }

    fclose(filepointer);

    return 0;
}