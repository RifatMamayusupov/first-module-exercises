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
            c+=i;
            printf("_Son:%d\n",i);
        }
        printf("A_dan B_gacha sonlar yig'indisi:%d\n",c);

    }
}