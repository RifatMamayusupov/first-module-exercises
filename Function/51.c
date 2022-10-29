#include <stdio.h>
#include <math.h>
void IsLeapYear(int y){
    if( y % 400==0 && y % 4==0)printf(" it is true:\n");
    else printf("its is false:\n");
}
int main (void){
    while(1){
    int Y1, Y2, Y3, Y4;
     printf("Y1 >>>");
    scanf("%d",&Y1);
     printf("Y2 >>>");
    scanf("%d",&Y2);
     printf("Y3 >>>");
    scanf("%d",&Y3);
     printf("Y4 >>>");
    scanf("%d",&Y4);

    IsLeapYear(Y1);
    IsLeapYear(Y2);
    IsLeapYear(Y3);
    IsLeapYear(Y4);
   }
    return 0;

}