#include <stdio.h>
#include <math.h>

//   U=e^k+y+tgxsqrt(y);

int main (){
while(1){
int k,y,x;
float U;
printf(" Enter the K term: ");
scanf("%d", &k);
printf(" Enter the  term: ");
scanf("%d", &y);
printf(" Enter the X term: ");
scanf("%d", &x);

U=exp(y+k)+tan(x*sqrt(y));

printf ("Natija: %f\n",U);

}
return 0;
}