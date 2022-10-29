#include <stdio.h>
#include <math.h>
int main (){
    while(1){
int n;
float x, s1=x;
printf("Enter the N term:");
scanf("%d",&n);
printf("Enter the X term:");
scanf("%f",&x);
for(int i=2; i<n+1; i++){
    s1+=(pow(-1, i-1)*pow(x,i))/i;
    printf("Natija: %f\n",s1);
}
    }
    return 0;
}