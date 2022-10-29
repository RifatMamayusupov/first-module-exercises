#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main (){
    while(1){
int n,i;
printf("N >>>");
scanf("%d",&n);

 int son[n];
 for(i=0; i<n; i++){
    printf("son[%d]=",i);
    scanf("%d",&son[i]);
 }
  int a=n;
     for(i=0; i<n; i++){
    if((son[i]<son[n-1]) && (son[i]>son[n-i])){
    printf("son[%d]=%d",i,son[i]);
    --a;
    break;
         }
      }
   if(a==0) printf("%d",0);
         }
    return 0;
}