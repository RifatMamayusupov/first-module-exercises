#include <stdio.h>
#include <stdlib.h>
  int main (){
    while(1){
   int n;

   printf("\nEnter the Belgi: ");
   scanf("%d", &n);

   for(int i=65; i<65+n+1; i++){
    printf("%c ", i);
       }
    }
    return 0;
  }