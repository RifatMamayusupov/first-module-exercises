#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    while(1){
    int n, i;
    printf("N >>> ");
    scanf("%d",&n);

    int son [n];
    for(i=0; i<n; i++){
        printf("son[%d]=",i);
        scanf("%d",&son[i]);
    }

    int  a=son[1]/son[0];
    for(i=1; i<n; i++){
        if(a!=son[i]/son[i-1]){
            a=0;
        }
    }
    printf("%d \n",a);
    }
    return 0;
}