#include <stdio.h>
#include <math.h>

int main(){
    while(1){
int A, B, C;
int almashuv;

printf(" Enter  the A term: ");
scanf("%d", &A);
printf(" Enter  the B term: ");
scanf("%d", &B);
printf(" Enter  the C term: ");
scanf("%d", &C);

    almashuv=A;
     A=C;
     C=B;
    B=almashuv;
    printf("A=%d va B=%d  va C=%d\n", C,A,B);
    }
    return 0;
}
