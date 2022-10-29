#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
  
  char satr[]=" Karochchi oxshadi";

  for(int i=0; i<strlen(satr); i++){
    if( satr[i]>=97 && satr[i]<123){
          satr[i]+=1;
       }
    if(satr[i]>=65 && satr[i]<91){
         satr[i]+=1;
    }
        printf("%c",satr[i]);
    }
    
    return 0;
}