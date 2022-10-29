#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 //(1 <= k <n)
int main (){
    while(1){
    int n, i;
    printf("N >>> ");
    scanf("%d",&n);

    int K;
    printf("K >>> ");
    scanf("%d",&K);

    int son[n];
     for(i=0; i<n; i++){
     printf("son[%d]=",i);
     scanf("%d",&son[i]);
    }

     for(i=0; i<n; i++){
       if(son[i]%K==0){
        printf("%d\n",son[i]);
       }
     }
  }
  return 0;    
}