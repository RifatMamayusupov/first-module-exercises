#include <stdio.h>
#include <math.h>

int main(){
    while(1){
        int x1, x2 , y1, y2, x3, y3;
float P,S;
float A, B, C;

printf(" Enter  the X1 term: ");
scanf("%d", &x1);
printf(" Enter  the X2 term: ");
scanf("%d", &x2);
printf(" Enter  the Y1 term: ");
scanf("%d", &y1);
printf(" Enter  the  Y2 term: ");
scanf("%d", &y2);
printf(" Enter  the x3 term: ");
scanf("%d", &x3);
printf(" Enter  the  Y3 term: ");
scanf("%d", &y3);

A=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
printf("Natija=A: %f\n", A);
B=sqrt(pow((y2-y3),2)+pow((x2-x3),2));
printf("Natija=B: %f\n", B);
C=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
printf("Natija=C: %f\n", C);

P=(A+B+C)/2;
printf("Uchburchak_parametri: %f\n", P);
S=sqrt(P*(P-A)*(P-B)*(P-C));
printf("Ucburchak_yuzasi: %f\n", S);
    }
    return 0;
}
