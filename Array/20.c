#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main (){
    while(1){
        int n,i, k, l;
         printf("N >>>");
         scanf("%d",&n);
         printf("K >>>");
         scanf("%d",&k);
         printf("L >>>");
         scanf("%d",&l);

         int son[n];
         for(i=0; i<n; i++){
         printf("son[%d]= ",i);
         scanf("%d",&son[i]);
         }
         int sum=0;
         for(i=k; i<l; i++){
         sum+=son[i];
         }
         printf("Sum:%d\n",sum);

     }
     return 0;
}