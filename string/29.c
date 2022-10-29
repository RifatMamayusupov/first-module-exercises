#include <stdio.h>
#include <string.h>
  int main (){

   char C='o'; //belgi
   char satr1[]="Hello", satr2[]="World";

   for(int i=0; i<strlen(satr1); i++){
    
    printf("%c",satr1[i]);
      for(int j=0; j<strlen(satr2); j++){
        if(satr1[i]==C){
         printf("%c",satr2[j]);
         }
      }
    }
    return 0;
  }