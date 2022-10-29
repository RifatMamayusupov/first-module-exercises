#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    while(1){
        int n,i;
        printf("N=");
        scanf("%d",&n);
        int a[n],b[n];

        for(i=0;i<n;i++){
            a[i]=rand()%100;
            printf("a[%d]=%d\n",i,a[i]);
        }
        int c=0;
        printf("%d\n");
        for(i=0; i<n; i++){
             c+=a[i];
             b[i]=c;
            printf("b[%d]=%d\n",i,b[i]);
        }
    }
    return 0;
}