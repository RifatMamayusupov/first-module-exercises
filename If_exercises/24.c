#include <stdio.h>
#include <math.h>
int main (){
    while(1){
float X;
printf("Enter the X term:");
scanf("%f", &X);
if(X>0)printf("Natija:%f\n", 2*sin(X));
if(X<=0)printf("Natija:%.1f\n",X-6);
    }
    return 0;
}
