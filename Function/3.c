
#include <stdio.h>
#include <math.h>

void Mean(float son, float son1){
    float qiymat, qiymat2;
    qiymat=(son+son1)/2;
    qiymat2=(son*son1)/2;
    printf("Natija:%f\n",qiymat);
    printf("Natija:%f\n",qiymat2);
    printf("\n");
}
   int main (){
    while(1){
float A, B, C, D;
printf("Enter the A term:");
scanf("%f",&A);
printf("Enter the B term:");
scanf("%f",&B);
printf("Enter the C term:");
scanf("%f",&C);
printf("Enter the D term:");
scanf("%f",&D);

Mean(A,B);
Mean(A,C);
Mean(A,D);

}
     return 0;
     }