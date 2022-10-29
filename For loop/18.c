#include <stdio.h>
#include <math.h>
int main (){
    while(1){
        int n,a,s=0;
        printf("Enter the N term:");
        scanf("%d",&n);
        printf("Enter the A term:");
        scanf("%d",&a);
        for(int i=1; i<=n; i++){
            s+=1+pow(-1,i)*pow(a,i);
            printf("Natija:%d\n", s);
        }
    }
    return 0;
}