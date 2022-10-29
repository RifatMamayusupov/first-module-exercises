#include <stdio.h>
#include <math.h>

// U=e^y+7.355k^2+sin^2x
int main (){
while (1)
{int y, x,k;
float U;
printf(" Enter the Y term: ");
scanf("%d", &y);
printf(" Enter the X term: ");
scanf("%d", &x);
printf(" Enter the K term: ");
scanf("%d", &k);

 U=exp(y)+7.355*pow(k,2)+pow(sin(x), 2);
printf("Natija: %f\n", U);
}
return 0;
}