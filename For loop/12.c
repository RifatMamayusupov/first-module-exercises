#include <stdio.h>
#include <math.h>
int main (){
    while(1){
        int n; float S=1;
        printf("Enter the N term:");
        scanf("%d",&n);
        for(float i=1.1; i<=n; i+=0.1){
            S*=i;
        }
        printf("Natija:%f\n",S);
    }
    return 0;
}