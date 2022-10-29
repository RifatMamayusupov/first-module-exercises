#include <stdio.h>
#include <math.h>

// L=1.51cosx^2+2x^3;
int main () {
while (1)
{
 int x;
 float L;
printf(" Enter the X term: ");
scanf("%d", &x);
L=1.51*cos(pow(x,2))+2*pow(x,3);
printf("Natija: %f\n", L);

}

    return 0;
}