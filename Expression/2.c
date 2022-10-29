#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// K=ln(p^2+y^3)+e^p;
int main (){
while(1){
    int p,y;
    float K;
printf(" Enter the P term: ");
scanf("%d", &p);
printf(" Enter the Y term: ");
scanf("%d", &y);

K=log(pow(p,2)+pow(y,3))+exp(p);
printf("Natija:%f\n",K);
}
    return 0;
}