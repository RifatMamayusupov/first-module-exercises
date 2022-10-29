#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    while(1){
        int n,i;
        printf("N >>>");
        scanf("%d",&n);
        int a[n],d[n];
        int b[n], c[n];
        for(i=0;i<n;i++){
            a[i]=rand()%100-rand()%100;
            printf("a[%d]=%d\n",i,a[i]);
        }
         for(i=0;i<n;i++){
            b[i]=rand()%100-rand()%100;
            printf("b[%d]=%d\n",i,b[i]);
        }
         for(i=0;i<n;i++){
            c[i]=rand()%100-rand()%100;
            printf("c[%d]=%d\n",i,c[i]);
        }