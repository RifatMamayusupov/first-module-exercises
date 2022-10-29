#include <stdio.h>
#include <math.h>
#include <stdlib.h>

 int main (){
    while (1){
 int n;
 printf("N >>> ");
 scanf("%d",&n);

 int F0=1, F1=1, F[n];
 for(int i=2; i<=n; i++){
 F[i]=F0+F1;
 F0=F1;
 F1=F[i];
 printf("[%d]=%d\n",i,F[i]);
       }  
    }
    return 0;
 }