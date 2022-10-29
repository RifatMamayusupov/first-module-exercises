#include <stdio.h>
#include <math.h>

// M=cos2y+3.6e^x
int main (){
while (1)
{int y, x;
float M;
printf(" Enter the Y term: ");
scanf("%d", &y);
printf(" Enter the X term: ");
scanf("%d", &x);

M=cos(2)*y+3.6*exp(x);
printf("Natija: %f\n", M);

    }
return 0;

}