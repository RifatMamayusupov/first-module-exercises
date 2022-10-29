#include <stdio.h>
#include <math.h>
int main (){
    while(1){
        int X, Y;
int A=8300,B=4800,  Value,Value1,Farq;
printf("Enter the Price of X kg Chocalet: ");
scanf("%d", &X);
printf("Enter the Price of X kg Confet: ");
scanf("%d", &Y);

Value=X*A;
Value1=Y*B;
Farq=Value-Value1;

printf("%d_kg chocolate=%d va %d_kg confet=%d, Furthemore , Chocolate is greater %d than Confets\n", X, Value,Y, Value1,Farq);
    }
    return 0;
}
