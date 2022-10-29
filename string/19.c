#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  int main (){

   char satr[]="415158";
   int sonlar=0, nuqtalar=0, harflar=0;

   for(int i=0; i<=strlen(satr); i++){
     
      if(satr[i]>97 && satr[i]<123 || satr[i]>65 && satr[i]<91){
               harflar++;
      }else if(satr[i>48 && satr[i]<58]){
               sonlar++;
      }else if(satr[i]==46){
               nuqtalar++;
      }
   }

   printf("Natija: %d, %d, %d \n",harflar,sonlar,nuqtalar);

   if(sonlar>1 && harflar==0 && nuqtalar==0){
      printf("Natija: 1\n");
   }else if(sonlar>1 && harflar==0 && nuqtalar==1){
      printf("Natija: 2\n");
   }else{
      printf("Natija: 0");
   }

    return 0;
  }