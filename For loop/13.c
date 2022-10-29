#include <stdio.h>
#include <math.h>
int main (){
    while(1){
        int n; float S=0;
        printf("Enter the N term:");
        scanf("%d",&n);
        int i;
        for( i=1; i<=n; i++){
         S+=pow(-1,i+1)*( 1.0  +(float)i/10);
         printf("Natija:%f\n",S);
          }
    }
    return 0;
}