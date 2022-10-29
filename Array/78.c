#include <stdio.h>
#include <stdlib.h>
 int main (){
    while(1){
        float a[10];
        int n,i;
        printf("N >>> ");
        scanf("%d",&n);
        
         
        for(i=0; i<n; i++){
            printf("a[%d]=",i);
            scanf("%d",&a[i]);
        }
    
        for(i=1; i<n; i++){
            a[i]=(a[i]+a[i+1])/2;
            printf("a[%d]=%f\n",i,a[i]);

        }     
       
    }
    return 0;
 }
        