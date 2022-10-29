#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
   while(1){
int n, i;
printf("N >>> ");
scanf("%d",&n);

int son[n];
for(i=0; i<n; i++){
   printf("son[%d]=",i);
   scanf("%d",&son[i]);
}

int a=n, b=0;
for(i=0; i<n; i++){
   if(son[i]<son[n-1]){
      printf("son[%d]=%d\n\n",i, son[i]);
      a++;
      break;
   }
}
if(a==n){
   printf("%d\n",b);
}
   }
   return 0;
}