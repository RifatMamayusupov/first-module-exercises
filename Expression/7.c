#include <stdio.h>
#include <math.h>

// N=m^2+2.8*|m|+0.55;
int main (){
while (1)
{int m;
float N;
printf(" Enter the M term: ");
scanf("%d", &m);
N=pow(m,2)+2.8*fabs(m)+0.55;
printf("Natija: %f\n", N);
}
return 0;
     }

