#include <stdio.h>
#include <string.h>
  int main (){

    FILE *filepointer;

    filepointer=fopen("20_ex.txt", "a+");
    
    char satr1[]="sal   om  sdgsd  h    sdh   sgahd  sdhgdh";

    for(int i=0; i<strlen(satr1); i++){
      if(satr1[i]==' ' && satr1[i-1]==' '){
          continue;
         }
     fputc(satr1[i],filepointer);
    }
  
  fclose(filepointer);
  
    return 0;
  } 