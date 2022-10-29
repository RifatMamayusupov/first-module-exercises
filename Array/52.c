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
    

    float a[n],b[n] ;
    for(i=0; i<n; i++){
        a[i]=rand()%10;
        printf("a[%d]=%f\n",i, a[i]);  
    }
    printf("\n");
     for(i=0; i<n; i++){
        if(a[i]<5){
            b[i]=2*a[i];
            printf("b[%d]=%f\n",i,b[i]);
        }else{
            b[i]=a[i]/2;
            printf("b[%d]=%f\n",i,b[i]);
        }
     }
        }
        return 0;
}
     