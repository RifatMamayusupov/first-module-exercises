#include <stdio.h>
#include <math.h>
 int main (){
    while(1){
  int n,i;
  int s, a;
  printf("Enter the N term:");
  scanf("%d",&n);
  a=n;
  for( i=1; i<=n; i++){
      s=pow(i,a);
       a-=1;
      printf("Natija:%d\n",s);
  }
     
    }
    return 0;
 }