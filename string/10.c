#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  int main (){
    while(1){
      int n;
    printf("N >>> ");
     scanf("%d",&n);

      char satr[n];
    printf("Enter the word of string: ");
     scanf("%s",satr);

     for( int i=strlen(satr)-1; i>=0; --i){
    printf("%c", satr[i]);
      }
    printf("\n");
     }

    return 0;
     }