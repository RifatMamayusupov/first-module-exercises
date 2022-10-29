#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  int main (){
   char   satr[]="salom,,. qatga ketopsan:";

    int tinish_belgi = 0;
    
     for(int i=0; i<strlen(satr); i++){
        if(satr[i]>=33 && satr[i]<=47 || satr[i]>=58  && satr[i]<=64){
              tinish_belgi++;
         }
     }
     printf("%d \n",tinish_belgi);
     
    return 0;
  } 