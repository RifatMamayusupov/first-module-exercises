#include <stdio.h>
#include <math.h>
 void RadtoDeg( int R){
    double degree, Pi=3.14;
    degree=Pi/R * 180/Pi;
    printf("%d_radian =%lf degree\n",R, degree);
 }
 int main (){
    while(1){
    int radian, radian1, radian2;
     printf("R >>> ");
    scanf("%d",&radian);
     printf("R1 >>> ");
    scanf("%d",&radian1);
     printf("R2 >>> ");
    scanf("%d",&radian2);

    RadtoDeg(radian);
    RadtoDeg(radian1);
    RadtoDeg(radian2);
     }
    return 0;
 }
