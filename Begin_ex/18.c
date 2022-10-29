#include <stdio.h>
#include <math.h>

int main(){
    while(1){
        int A, B , C;
int Uzunlik1, Uzunlik2, Kopaytma;
printf(" Enter  the A term: ");
scanf("%d", &A);
printf(" Enter  the B term: ");
scanf("%d", &B);
printf(" Enter  the C term: ");
scanf("%d", &C);

Uzunlik1=fabs(A-C);
Uzunlik2=fabs(B-C);
Kopaytma=Uzunlik1*Uzunlik2;
printf("Natija_1: %d\n", Uzunlik1);
printf("NAtija_2: %d\n", Uzunlik2);
printf("NAtija_3: %d\n", Kopaytma);
    }
    return 0;
}