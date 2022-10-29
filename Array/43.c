#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (){
    while(1){
    int n, i;
    printf("N >>> ");
    scanf("%d",&n);

    int son[n];
    for(i=0; i<n; i++){
        printf("son[%d]=",i);
        scanf("%d",&son[i]);
    }

    int num=0;
    for( i=1; i<n+1; i++){
        if(son[i-1]!=son[i]){
            num++;
        }
    }
    printf("soni: %d\n",num);
    }
    return 0;
}