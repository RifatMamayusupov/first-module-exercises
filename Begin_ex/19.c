#include <stdio.h>
#include <math.h>

int main(){
    while(1){
        int A, B , C, D;
int Uzunlik1, Uzunlik2;
float S,P;
printf(" Enter  the A term: ");
scanf("%d", &A);
printf(" Enter  the B term: ");
scanf("%d", &B);
printf(" Enter  the C term: ");
scanf("%d", &C);
printf(" Enter  the  Dterm: ");
scanf("%d", &D);

Uzunlik1=fabs(A-B);
Uzunlik2=fabs(B-C);
S=Uzunlik1*Uzunlik2;
P=(Uzunlik1+Uzunlik2)*2;
printf("Natija_1: %f\n", S);
printf("NAtija_2: %f\n", P);
    }
    return 0;
}
