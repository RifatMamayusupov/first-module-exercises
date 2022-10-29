#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main (){
    while(1){
srand(time(NULL));
    int n, i;
    printf("N >>> ");
    scanf("%d",&n);
    

    int a[n], b[n], c[n];
    for(i=0; i<n; i++){
        a[i]=rand()%10;
        printf("a[%d]=%d\t",i, a[i]);  
    }
    printf("\n");

     for(i=0; i<n; i++){
        b[i]=rand()%10;
        printf("b[%d]=%d\t",i, b[i]);  
    }
        printf("\n");
    for(i=0; i<n; i++){
        if(a[i]>b[i]){
            c[i]=a[i];
            printf("c[%d]=%d\t",i,c[i]);
        }else{
            c[i]=b[i];
            printf("c[%d]=%d\t",i,c[i]);
        }
    }
        printf("\n");
       }
    return 0;
}