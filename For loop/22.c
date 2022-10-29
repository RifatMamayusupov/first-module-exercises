#include <stdio.h>
#include <math.h>
int main (){
    while(1){
int n;
float x, s1=1, s=1;
printf("Enter the N term:");
scanf("%d", &n);
printf("Enter the X term:");
scanf("%f", &x);
for(int i=1; i<=n; i++){
   s*=i;
   s1+=pow(x,i)/(s);
   printf("%f\n",s1);
}
    }
    return 0;
}