#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
     while(1){
        int n,i;
        printf("N=");
        scanf("%d",&n);
        int a[n], b[n];
        for(i=0; i<n; i++){
            a[i]=rand()%100;
            printf("a[%d]=%d\n",i,a[i]);
        }
        for(i=0; i<n; i++){
            b[i]=0;
              for(int j=i; j<n; ++j){
                b[i]+=a[j];
            }
            printf("b[%d]=%d\n",i,b[i]);
        }
    }
    return 0;
}