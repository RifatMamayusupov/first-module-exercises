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

    int j;
    for( i=1; i<n; i++){
        for(j=i+1; j<n; j++){
          if(son[i]==son[j]){
            printf("%d va %d\n",i,j);
           }
        }
      }
    }
    return 0;
}