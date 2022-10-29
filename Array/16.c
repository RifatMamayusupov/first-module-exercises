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
            printf("Son[%d]=",i);
            scanf("%d",&son[i]);
        }
        for(i=0; i<n; i++){
            printf("Son[%d]=%d\n",i,son[i]);
            printf("Son[%d]=%d\n",n-i-1,son[n-i-1]);
        }
            printf("\n\n");
    }
    return 0;
}