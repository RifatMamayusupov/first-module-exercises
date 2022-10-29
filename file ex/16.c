#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
  
    FILE *filepointer;

    filepointer=fopen("16ex.txt","a+");
    
    char satr[]="Saloom akka sdhjs absj xsabsh  sxasj";

    for (int i=0; i<strlen(satr); i++){
       if(satr[i]==' '){
          continue;
       }
       fputc(satr[i],filepointer);
    }

    fclose(filepointer);

    return 0;
 }