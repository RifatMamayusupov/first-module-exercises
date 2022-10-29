#include <stdio.h>
#include <stdlib.h>
int main (){
    while(1){
int n, k, i;
printf("N >>> ");
scanf("%d",&n);
printf("K >>> ");
scanf("%d",&k);

int son[n];
for(i=0; i<n; i++){
    printf("son[%d]=",i);
    scanf("%d",&son[i]);
}
    

int count =0;
 for(i=0; i<n; i++){
    if(son[i]%2!=0){
     
      count++;
    }
 } printf("son[%d]=%d\n",i, son[i-count]);

    }
    return 0;
}

