#include <stdio.h>
#include <math.h>

//  T=sqrt(fabs(6*y^2-0.1*y+4))
int main (){
while (1)
{int y;
float T;
printf(" Enter the Y term: ");
scanf("%d", &y);

T=sqrt(fabs(6*pow(y,2)-0.1*y+4));
printf("Natija: %f\n", T);
}
   return 0;
    }