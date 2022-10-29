#include <stdio.h>
#include <math.h>
int main (){
    while(1){
int n; float a, son, b;
float F;
printf("Entr the N term:");
scanf("%d", &n);
printf("Entr the A term:");
scanf("%f", &a);
printf("Entr the B term:");
scanf("%f", &b);
for(int i=a; i<b+1; i++){
    son=(b-a)/n;
    printf("NAtija:%f\n",son);
}
    F=1-sin(son);
    printf("F(%.2f)=%f\n",son, F);
    }
    return 0;
}