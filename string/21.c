#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  int main (){
    char satr[]="Uzbekistan";

    for(int i=strlen(satr)-1; i>=0; i--){
        printf("%d ",satr[i]);
       }

    return 0;
  }