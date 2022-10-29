#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 int main (){
while(1){
  int n;
  printf("N >>> ");
  scanf("%d",&n);

  int son[n];
    for(int i=0; i<=n; ++i){
    son[i]=pow(2,i);
    printf("%d\n",son[i]);
       }
    }
   return 0;
 }