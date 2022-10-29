#include <stdio.h>
#include <math.h>

int main(){
    while(1){
int A, B;
int almashuv;

printf(" Enter  the A term: ");
scanf("%d", &A);
printf(" Enter  the B term: ");
scanf("%d", &B);

   almashuv=A;
      A=B;
   B=almashuv;
   printf("A=%d va B=%d\n", A, B);
    }
    return 0;
}

