#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main (){
    while (1){
int a, b, c;
printf("Enter the A term:");
scanf("%d", &a);
printf("Enter the B term:");
scanf("%d", &b);
printf("Enter the C term:");
scanf("%d", &c);
bool value = (c==sqrt(pow(a,2)+pow(b,2)));
printf("_Uchburchak_to'g'ri_burchakli: %d\n", value);
    }
    return 0;
}