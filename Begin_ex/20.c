#include <stdio.h>
#include <math.h>

int main(){
    while(1){
        int x1, x2 , y1, y2;
int Uzunlik1, Uzunlik2;
float Masofa;
printf(" Enter  the X1 term: ");
scanf("%d", &x1);
printf(" Enter  the X2 term: ");
scanf("%d", &x2);
printf(" Enter  the Y1 term: ");
scanf("%d", &y1);
printf(" Enter  the  Y2 term: ");
scanf("%d", &y2);

Masofa=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
printf("Natija: %f\n", Masofa);
    }
    return 0;
}