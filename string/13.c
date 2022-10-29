#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    int main (){

    char satr[]="Uz12be4kist36tadsxsxs544sxsxs588n";

          int count;
        for(int i=1; i<strlen(satr); i++){
          for(int j=48; j<=57; j++){
             if(satr[i]==j){
                count++; 
              }              
           }
        }
          printf("soni: %d\n",count);
        
        return 0;
        }