#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  int main (){

  char belgi;
  printf("Enter the Belgi: ");
  scanf("%c",&belgi);

  char satr[]="Uzbekistan";


  for(int i=0; i<strlen(satr); i++){
    if(satr[i]==belgi){
      for(int j=0; j<2; j++){
         printf("%c \n", satr[i]);     
          }
          break;
      }
   }
    return 0;
  }