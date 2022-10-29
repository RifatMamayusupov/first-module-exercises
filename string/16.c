#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//  
  int main (){
    char satr[100];
    scanf("%s",satr);

    for(int i=0; i<strlen(satr); i++){
       satr[i]+=32;
      
    }
     printf("%s",satr);

    return 0;
  }