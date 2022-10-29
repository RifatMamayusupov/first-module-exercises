#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (){
    while(1){
    int n, i,j;
    printf("N >>> ");
    scanf("%d",&n);
    

    int son[n];
    for(i=0; i<n; i++){
        printf("son[%d]=",i);
        scanf("%d",&son[i]);
    }
    for(i=1; i<=n; i++){
        for(j=0; j<n; j++){
            if(son[j]==i){
                j=n+100;
                break;
            }
        }
    }
    if(j!=n+100){
        printf("%d",i);
        break;
    }
    if(i==n+1){
        printf("%d\n",0);
    }
    
      }
    return 0;
}
    