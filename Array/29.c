#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
    while(1){
         int n,i;
        printf("N >>> ");
        scanf("%d",&n);

        int son[n];
        for(i=1; i<n; i+=2){
            printf("son[%d]=",i);
            scanf("%d",&son[i]);
        }

        int max =son[0];
        for(i=0; i<n; i++){
            if(son[i]>max) max=son[i];
        }
        printf("%d\n",max);
    }
    return 0;
}