#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  int main (){
    char satr[]="Uzbekistan";


 int sum=0;
    for(int i=0; i<strlen(satr); i++){
        printf("%d ",satr[i]);
        sum+=satr[i];
    }
    printf("\n\nYig'indisi: %d ",sum);

    return 0;
  }