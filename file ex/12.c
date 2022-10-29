#include <stdio.h>
#include <string.h>
  int main (){

      FILE *filepointer;
      char satr[100]="", hammasi[10000]="", hammasi2[100]="assalomu";

      int index=0;

      filepointer=fopen("Hi1.text","r");

      while(fgets(satr,100,filepointer)){
          for(int i=0; i<strlen(satr); i++){
              hammasi[index++]=satr[i];
          }
       }  
        fclose(filepointer);

        filepointer=fopen("Hi1.text","w");

       for(int i=0; i<strlen(hammasi); i++){
          if(hammasi[i]==10 && hammasi[i-1]==10){
            fputs(hammasi2,filepointer);
          }
          fputc(hammasi[i],filepointer);
       }
       fclose(filepointer);
       return 0;  

  }