#include <stdio.h>
#include <math.h>
int main (){
    while(1){
        int n,n2=0;
        printf("Enter the N term:");
        scanf("%d",&n);
        for(int i=1; i<=(n*2-1); i+=2){
            n2+=i;
            printf("Natija:%d\n",n2);
        }
    }
    return 0;
}
