#include <stdio.h>
#include <math.h>
int main (){
    while (1)
    {int X,Y;
    printf("Enter the X term:");
    scanf("%d",&X);
    printf("Enter the Y term:");
    scanf("%d",&Y);
    if(X>0 && Y>0)printf("_The point is in the 1-chorak:\n");
    if(Y>0 && X<0)printf("_The piont is in the 2-chorak:\n");
    if(X<0 && Y<0)printf("_The piont is in the 3-chorak:\n");
    if(Y<0 && X>0)printf("_The piont is in the 4-chorak:\n");
    }
    return 0;
}