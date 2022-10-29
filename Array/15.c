#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// ( n - juft son)
int main (){
    while(1){
  int n, i;
  printf("N >>> ");
  scanf("%d",&n);

  int  son[n];
  for(i=0; i<n; i++){
    printf("son[%d]=\n",i);
    scanf("%d",& son[i]);
  }

  for(i=1; i<n; i+=2){
    printf("son[%d]=%d\n",i,son[i]);
  }
     printf("\n\n");

  for(i=n-2; i>0; i-=2){
    printf("son[%i]=%d\n",i,son[i]);
  }
    }
    return 0;
}