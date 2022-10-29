#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main (){
    while(1){
    int n,i;
    printf("N >>> ");
    scanf("%d",&n);

    int son[n];
    for(i=0; i<n; i++){
        printf("Son[%d]=",i);
        scanf("%d",&son[i]);
    }
    printf("\n");
    for(i=0; i<n; i++){
        if(i%2==0){
        printf("son[%d]=%d\n",i, son[i]);
        printf("son[%d]=%d\n",i+1, son[i+1]);
            }else{
        printf("son[%d]=%d\n",n-i-1,son[n-i-1]);
        printf("son[%d]=%d\n",n-i-2,son[n-i-2]);
          }
      }
      printf("\n\n");
    }
    return 0;
}