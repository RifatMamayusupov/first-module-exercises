#include <stdio.h>
#include <math.h>
int main (){
    while(1){
float X;
printf("Enter the X term:");
scanf("%f", &X);
if(X<0)printf("F(%.2f)=%f\n",X,0);
if(((int)X)%2==0)printf("F(%.2f)=%d\n",X,1);
else printf("F(%.2f)=%d\n",X,-1);
    }
    return 0;
}