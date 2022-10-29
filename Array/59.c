#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    while(1){
        int n,i;
        printf("N=");
        scanf("%d",&n);
        int a[n]; double b[n];
        for(i=0;i<n;i++){
            a[i]=rand()%100;
            printf("a[%d]=%d\n",i,a[i]);
        }
        printf("\n");
        for(i=0;i<n;i++){
            b[i]=0;
            for(int j=0;j<=i;j++){
                b[i]+=a[j];
                
            }
           b[i]/=(double)i;
            printf("b[%d]=%lf\n",i,b[i]);
        }
       
        printf("\n");
    }
    return 0;
}