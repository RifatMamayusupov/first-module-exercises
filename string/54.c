#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

   char satr[]=" Salom QandAAysila nIMAG pala EEaho";
   int counter=0;

   for (int i=0; i<strlen(satr); i++){
    if(satr[i]>=65 && satr[i]<=91){
        counter++;
      }
   }
   printf("Stringdagi kotta hariflar soni %dta.", counter);

    return 0;
}