#include <stdio.h>
#include <stdlib.h>
 int main (){
    while(1){
        int n, i, k;
        printf("N >>> ");
        scanf("%d",&n);
        
        printf("K >>> ");
        scanf("%d",&k);

        int a[n];
        for(i=0; i<n; i++){
            printf("a[%d]=",i);
            scanf("%d",&a[i]);
        }
         printf("\n");

        for(i=1; i<n+1; i++){
            a[i]*=k;
            printf("a[%d]=%d\n",i,a[i]);
        }
        printf("\n");

    }
    return 0;
 }