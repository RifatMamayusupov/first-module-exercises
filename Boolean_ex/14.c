#include <stdio.h>
#include <stdbool.h>

int main (){
    while (1){
int x, y;
printf("Enter the X term:");
scanf("%d", &x);
printf("Enter the Y term:");
scanf("%d", &y);
bool value =(x<0 && y>0);
bool value2=(x<0 && y<0); 
printf("BU_ikkinchi_chorak: %d\n", value);
printf("BU_uchunchi_chorak: %d\n", value2);
    }
    return 0;
}