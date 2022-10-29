#include <stdio.h>
#include <math.h>

// D=9.8a^2+5.52cost^5;
int main (){
while (1)
{int a, t;
float D;
printf(" Enter the A term: ");
scanf("%d", &a);
printf(" Enter the T term: ");
scanf("%d", &t);

D=9.8*pow(a,2)+5.52*cos(pow(t,5));
printf("Natija: %f\n", D);
    
}

    return 0;
}
