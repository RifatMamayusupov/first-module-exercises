#include <stdio.h>
#include <math.h>

int main(){
    while(1){
int a,b;
float Orta_geometrikasi;
printf(" Enter  the A term: ");
scanf("%d", &a);
printf(" Enter  the B term: ");
scanf("%d", &b);

Orta_geometrikasi=sqrt(a*b);
printf("Natija: %f\n",Orta_geometrikasi);
    }
    return 0;
}