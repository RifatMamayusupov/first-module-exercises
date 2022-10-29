#include <stdio.h>
#include <math.h>
int main (){
    while(1){
float X;
printf("Enter the X term:");
scanf("%f", &X);
if(X<=0)printf("F(%.2f)=%f\n",X,-X);
if(0<X<2)printf("F(%.2f)=%f\n",X,pow(X,2));
if(X>=2)printf("F(%.2f)=%d\n",X,4);
    }
    return 0;
}