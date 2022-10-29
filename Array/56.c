#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    while(1){
        int n,i,count=0;
        printf("n=");
        scanf("%d",&n);
        int a[n],b[n];

        for(i=0;i<n;i++){
            a[i]=rand()%100;
            printf("a[%d]=%d\n",i,a[i]);
        }
           for(i=3; i<a[i]; i+=3){
          b[count++]=a[i];
        }
        printf(" soni: %d \n\n",count);
        for(i=0;i<count;i++){
            printf("b[%d]=%d\n",i,b[i]);
        }
        printf("\n");

    }
    return 0;
}