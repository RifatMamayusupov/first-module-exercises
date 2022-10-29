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
 int term =son[0]>0;
 for( i=1; (i<n && term!=son[i]>0); i++){
       term=son[i]>0;
 }
 if(i==n){
    printf("%d \n",0);
 }else{
 printf("%d \n",i+1);
    }
       }
    return 0;
}