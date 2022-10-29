#include <stdio.h>
#include <math.h>
#include <stdlib.h>
  //(n= juft son)
 int main (){
  while(1){
 int n, i;
 printf("N >>> ");
 scanf("%d",&n);

 int son[n];
 for(i=0; i<n; i++){
    printf("Son[%d]=",i);
    scanf("%d",&son[i]);
   }
  printf("\n\n");
  
 for(i=0; i<n; i+=2){
 printf("son[%d]=%d\n",i,son[i]);
     }
  }
     return 0;
 }