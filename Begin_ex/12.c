#include <stdio.h>
#include <math.h>

int main(){
    while(1){
int a,b;
float c, P;
printf(" Enter  the A term: ");
scanf("%d", &a);
printf(" Enter  the B term: ");
scanf("%d", &b);

c=sqrt(pow(a,2)+pow(b,2));
printf("Gipotenuza: %f\n", c);
P=a+b+c;
printf("Parametri: %f\n", P);
    }
    return 0;
}

