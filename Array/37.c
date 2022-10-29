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
        for(i=2; i<n; i++){
            if(son[i-2]<son[i-1] && !son[i-1]<son[i]){
                ++count;
            }
        }
        if(son[n-2]<son[n-1]) ++count;
        printf("%d\n",count);
    }
    return 0;
}