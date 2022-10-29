#include <stdio.h>
#include <math.h>

int main(){
    while(1){
int X, Y;
printf(" Enter  the X term: ");
scanf("%d", &X);

Y=4*pow((X-3),6)-7*pow((X-3),3)+2;
printf("Y_function teng: %d\n", Y);
    }
    return 0;
}