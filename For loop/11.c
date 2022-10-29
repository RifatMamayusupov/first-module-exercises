#include <stdio.h>
#include <math.h>
int main (){
    while(1){
        int n, S=0;
        printf("Enter the N term:");
        scanf("%d",&n);
        for(int i=0; i<=n; i++){
            S+=pow(n+i,2);
        }
        printf("Natija:%d\n",S);
    }
    return 0;
}