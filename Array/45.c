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

    int ayirma=abs(son[0]-son[1]), a=1;
    for(i=1; i<n+1; i++){
        if(abs(son[i-1]-son[i])<ayirma){
            ayirma=abs(son[i-1]-son[i]);
            a=i;
        }
    }
    printf("%d va %d\n",son[a-1], son[a]);
    }
    return 0;
}