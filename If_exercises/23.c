#include <stdio.h>
#include <math.h>
int main (){
    while(1){
int A, B, C, D;
printf("Enter the A term:");
scanf("%d", &A);
printf("Enter the B term:");
scanf("%d", &B);
printf("Enter the C term:");
scanf("%d", &C);
if(A>B)printf("_D:%d\n",abs(C-(A-B)));
else printf("_D:%d\n",abs(A-(B-C)));

    }
    return 0;
}