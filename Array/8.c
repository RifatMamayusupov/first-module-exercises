#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 int main (){
    while(1){
int n, i;
   printf("N >>> ");
   scanf("%d",&n);

int count=0, son[n];
   for(int i=1; i<=n; i++){
   printf("son[%d] >>>",i);
   scanf("%d",&son[i]);
   }
for( i=1; i<n; i++){
    if(son[i]%2!=0){
    printf("%d\n",son[i]);
    count++;   
      }
  }
     printf("Soni:%d\n",count);
  }
     return 0;
 }