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
        int count=0;
        for(i=1; i<n; i++){
            if(a[i]%2==0){
               count=a[i];
               break;
                
            }
        }
         for(; i<n; i++){
            if(a[i]%2==0){
                a[i]+=count;
                printf("a[%d]=%d\n",i,a[i]);
            }
         }
    
    }
    return 0;
 }