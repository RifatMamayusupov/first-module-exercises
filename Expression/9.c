#include <stdio.h>
#include <math.h>

// V = ln(y+0.95)+sinx^4;
int main (){
while (1)
{int y, x;
float V;
printf(" Enter the Y term: ");
scanf("%d", &y);
printf(" Enter the X term: ");
scanf("%d", &x);

V=log(y+0.95)+pow(sin(x),4);
printf("Natija: %f\n", V);
}
   return 0;
}