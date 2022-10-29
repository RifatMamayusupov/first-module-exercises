#include <stdio.h>
#include <math.h>

int main(){
    while(1){
int A, n, daraja;
printf(" Enter  the N term: ");
scanf("%d", &n);
printf(" Enter  the A term: ");
scanf("%d", &A);

int i;

for(i=2; i<=n; i+=2){
    daraja=pow(A,i);
    printf("A_qiymatning Darajasi: %d\n\n", daraja);
}
return 0;
    }
}
