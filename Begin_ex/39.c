#include <stdio.h>
#include <math.h>
int main (){
 // Ax^2+Bx+C=0
    while(1){
 float A, B, C;
 float D, x1,x2;
printf("Enter the A_coefficient:");
scanf("%f", &A);
printf("Enter the B_coefficient:");
scanf("%f", &B);
printf("Enter the C_coefficient:");
scanf("%f", &C);

D=pow(B,2)-4*A*C;
x1=(-B+sqrt(D)/2*A);
x2=(-B-sqrt(D)/2*A);
printf("X1= %f va X2= %f\n", x1,x2);
    }
    return 0;
}
