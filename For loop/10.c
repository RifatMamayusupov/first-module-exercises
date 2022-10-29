#include <stdio.h>
#include <math.h>
int main (){
    while(1){
        int n; float S=0;
        printf("Enter the N term:");
        scanf("%d",&n);
        for(float i=1; i<=n; i++){
            S+= (1)/i;
        }
         printf("Natija:%f\n",S);
    }
    return 0;
}