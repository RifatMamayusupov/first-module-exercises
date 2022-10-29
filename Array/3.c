#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main (){
    while(1){
    int n;
    printf("N >>> ");
    scanf("%d",&n);

    int A[n], d=2;
    for(int  i=1; i<=n; i++){
    A[i]=(i-1)+2;
    printf("[%d]=%d\n",i, A[i]);
      }
  }
    return 0;
}