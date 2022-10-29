#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    while(1){
        int n,i;
        printf("n=");
        scanf("%d",&n);
        int a[n],b[n];

        for(i=0;i<n;i++){
            a[i]=rand()%100;
            printf("a[%d]=%d\n",i,a[i]);
        }
        printf("\n");
        for(i=0; i<a[i];i+=2){
            b[i]=a[i];
            printf("b[%d]=%d\n",i,b[i]);
        }
        printf("\n");
        for(i=1; i<a[i];i+=2){
            b[i]=a[i];
            printf("b[%d]=%d\n",i,b[i]);
        }
    }
    return 0;
}