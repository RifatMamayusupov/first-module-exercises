#include <stdio.h>
#include <stdlib.h>
 int main (){
    while(1){
        int n,i;
        printf("N >>> ");
        scanf("%d",&n);

        int a[n];
        for(i=0; i<n; i++){
            printf("a[%d]=",i);
            scanf("%d",&a[i]);
        }

        
        for(i=n-1; i>=1; i--){
            a[i]=a[i-1];
        }

           a[0]=0;
         for(i=0; i<n; i++){
            printf("a[%d]=%d\n",i,a[i]);
         }


    }
     return 0;
 }