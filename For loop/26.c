#include <stdio.h>
#include <math.h>
int main (){
    while(1){
int n;
float x,  s1=x;
printf("Enter the N term:");
scanf("%d",&n);
printf("Enter the X term:");
scanf("%f",&x);
for(int i=1; i<2*n+1; i++){
s1+=(pow(-1,i)*pow(x,2*i+1))/(2*i+1);
printf("Natija:: %f\n",s1);
}
    }
    return 0;
}
