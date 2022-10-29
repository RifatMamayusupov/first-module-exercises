#include <stdio.h>
#include <math.h>
void Sin1(double x, int z){
    double son=x; int z1=1;
    for (int i=1; i<=2*z+1; i++){
       z1*=i;
       son+=(pow(-1,i)*pow(x,i))/z1;
    }
    printf("<<Natija>>: %lf\n",son);
}
int main (){
    while(1){
    double x; int z1, z2, z3;
    printf("Enter the X term:");
    scanf("%lf", &x);
    printf("Enter the z1 term:");
    scanf("%d", &z1);
    printf("Enter the z2 term:");
    scanf("%d", &z2);
    printf("Enter the z3 term:");
    scanf("%d", &z3);

    Sin1(x,z1);
    Sin1(x,z2);
    Sin1(x,z3);
     }
    return 0;

}