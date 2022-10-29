#include <stdio.h>
#include <math.h>
int main (){
    while(1){
int n;
float x, s=1, s1=x;
printf("Enter the N term:");
scanf("%d",&n);
printf("Enter the X term:");
scanf("%f",&x);
for(int i=1; i<n+1; i++){
    s*=(2*i+1);
    s1+=( pow(-1,i)*pow(x,(2*i+1)))/(s);
     printf("Natija:%f\n",s1);
           }
    
    }
    return 0;
}