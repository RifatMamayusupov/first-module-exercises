#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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

        for(i=0; i<n; i++){
            if(a[i-1]>a[i] && a[i]< a[i+1]){
              a[i]=pow(a[i],2);
            }
        }
        
        for(i=0; i<n; i++){
            printf("a[%d]=%d\n",i,a[i]);
        }
    }
    return 0;
 }