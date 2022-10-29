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
         int sum=0, count=0; double A;
         for(i=k; i<l; i++){
         sum+=son[i];
         count++;
          A=sum/count;
         }
         printf("%d va %d sonlar o'rta_arfmetikasi :%d\n",k,l,sum/count);

     }
     return 0;
}