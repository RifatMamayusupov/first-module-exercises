#include <stdio.h>
#include <stdbool.h>

int main (){
    while (1){
int x, y, x1, y1, x2, y2;
printf("Enter the X term:");
scanf("%d", &x);
printf("Enter the Y term:");
scanf("%d", &y);
printf("Enter the X1 term:");
scanf("%d", &x1);
printf("Enter the Y1 term:");
scanf("%d", &y1);
printf("Enter the X2 term:");
scanf("%d", &x2);
printf("Enter the Y2 term:");
scanf("%d", &y2);
bool value =(x>0 && y>0);
bool value2=(x1<0 && y1>0); 
bool value3=(x2>0 && y2<0);
printf("_o'ng yuqori_(x,y) nuqtada: %d\n", value);
printf("_chap yuqori_(x1,y1)nuqtada: %d\n", value2);
printf("_o'ng pastki_(x2,y2)nuqtada: %d\n", value3);
    }
    return 0;
}