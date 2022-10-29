#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  int main (){
    while(1){
      int n;
    printf("N >>> ");
     scanf("%d",&n);

      char satr[]= "hello";
      char belgi='*';

     for(int i=0; i<strlen(satr); i++){
       printf("%c",satr[i]);
        for(int j=0; j<n; j++){
             printf("%c",belgi);
         }
       }
       printf("\n");
    }
    return 0;
  }