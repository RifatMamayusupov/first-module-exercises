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
printf("son[%d]=",i);
scanf("%d",&son[i]);
 }

int sum1=0, sum2=0, count=0, count1=0;
for(i=k; i<l; i++){
   sum1+=son[i];
   count++;
}

for(i=0; i<n; i++){
    sum2+=son[i];
    count1++;
}

printf("Natija: %i\n", (sum2-sum1)/(count1-count));

    }
    return 0;
}