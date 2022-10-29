#include <stdio.h>
#include <math.h>
int main (){
    // A*X+B=0
    while(1){
 float A, B;
 float X;
printf("Enter the A_coefficient:");
scanf("%f", &A);
printf("Enter the B_coefficient:");
scanf("%f", &B);
X=-1*B/A;
printf("X_qiymat=%f\n",X);
    }
    return 0;
}