#include <stdio.h>
#include <math.h>
int main (){
    while(1){
 float A, B, C, A1, B1, C1;
 float D, x, y;
printf("Enter the A_coefficient:");
scanf("%f", &A);
printf("Enter the B_coefficient:");
scanf("%f", &B);
printf("Enter the C_coefficient:");
scanf("%f", &C);
printf("Enter the A1_coefficient:");
scanf("%f", &A1);
printf("Enter the B1_coefficient:");
scanf("%f", &B1);
printf("Enter the C1_coefficient:");
scanf("%f", &C1);
D=(A*B1-A1*B);
x=(C*B1-C1*B)/D;
y=(A*C1-A1*C)/D;
printf("X=%f va Y=%f\n", x, y);
    }
    return 0;
}
