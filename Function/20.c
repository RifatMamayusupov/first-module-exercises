#include <stdio.h>
#include <math.h>
void TriangleP(int a, int b){
    double c, P;
    c=sqrt(pow(a,2)+pow(b,2));
    P=a+b+c;
    printf("_Uchburchak_perimetri:%lf\n",P);
}
int main (){
    while (1){
   
    int a, b;
    printf("Enter the A term:");
    scanf("%d",&a);
    printf("Enter the B term:");
    scanf("%d",&b);

    TriangleP(a,b);
    }

    return 0;
}