#include <stdio.h>
#include <math.h>
int main (){
    while (1){
        int A, B, c=1;
        printf("Enter the A term:");
        scanf("%d",&A);
        printf("Enter the B term:");
        scanf("%d",&B);
        for(int i=A; i<=B; i++){
            printf("_Son:%d\n",i);
            c*=i;
        }
        printf("A_dan B_gacha bo'lgan sonlar Ko'paytmaasi:%d\n",c);
    }
    return 0;
}