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
     int sum= son[0]+son[1], a=1;
      for(i=2; i<n; i++){
      if((son[i-1]+son[i])>sum){
       sum=son[i-1]+son[i];
        a=i;
        }
    }
   
    printf("sum: %d va %d\n",son[a-1], son[a]);
    }
    return 0;
}