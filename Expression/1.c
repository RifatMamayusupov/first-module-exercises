#include <stdio.h>
#include <math.h>

// R=3t^2+3l^5+4.9
int main(){
    while (1){
int t, l;
float R;
printf(" Enter the T term: ");
scanf("%d", &t);
printf(" Enter the L term: ");
scanf("%d", &l);

R=3*pow(t,2)+3*pow(l,5)+4.9;

printf("Natija: %.2f\n", R);

}
    return 0;
}

