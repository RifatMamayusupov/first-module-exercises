#include <stdio.h>
#include <math.h>
int main (){
    while(1){
float X;
printf("Enter the X term:");
scanf("%f", &X);
if(X<-2 || X>2)printf("F(%.2f)=%f\n",X,2*X);
else printf("F(%.2f)=%f\n",X,-3*X);
    }
    return 0;
}