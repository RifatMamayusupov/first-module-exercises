#include <stdio.h>
#include <math.h>
int main (){
    while(1){
int n;
float x, s1=1,s=1;
printf("Enter the N term:");
scanf("%d",&n);
printf("Enter the X term:");
scanf("%f",&x);
for(int i=2; i<2*n; i++){
    s*=i;
    printf("%f\n",s);
    s1+=(pow(-1,i-1)*(2*i-3)*pow(x,i))/(s);
    printf("Natija: %f\n",s1);
}
    }
    return 0;
}