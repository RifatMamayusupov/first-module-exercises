#include <stdio.h>
#include <stdlib.h>

  int main (){
    while(1){
   int n, k;
    printf("N >>> ");
   scanf("%d",&n);

    printf("K >>> ");
   scanf("%d",&k);

     FILE *filepointer;

     char filename[100]="";

     scanf("%s",&filename);

     filepointer =fopen(filename, "w");

        for(int i=0; i<n; i++){
              for(int j=0; j<k; j++){
                 fputs("*",filepointer);
              }
              fputs("\n",filepointer);
        }


    fclose(filepointer);
   }
    return 0;
  }