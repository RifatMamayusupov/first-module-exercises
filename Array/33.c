#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
    while(1){
         int n,i;
        printf("N >>> ");
        scanf("%d",&n);

        int son[n];
        for(i=0; i<n; i++){
            printf("son[%d]=",i);
            scanf("%d",&son[i]);
        }
        int count=0;
        for(i=1; i<n; i++){
            if(son[i-1]<son[i] && son[i]>son[i+1]){
         printf("son[%d]=%d\n",i,son[i]);
               ++count;
            }
        }
        printf("soni:%d\n",count);
    }
    return 0;
}