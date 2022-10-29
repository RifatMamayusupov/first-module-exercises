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
bool value = (a*b>0 && b*c>0 && a*c>0);
printf("_Tomonli Uchburchak :%d\n", value);
    }
    return 0;
}