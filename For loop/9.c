#include <stdio.h>
#include <math.h>
int main (){
    while (1){
        int A, B, c=0;
        printf("Enter the A term:");
        scanf("%d",&A);
        printf("Enter the B term:");
        scanf("%d",&B);
        for(int i=A; i<=B; i++){
            printf("_Son:%d\n",i);
            c+=pow(i,2);
        }
        printf("A_dan B_gacha bolgan barcha sonlar kvadratini yig'indis:%d\n",c);
    }
    return 0;
}