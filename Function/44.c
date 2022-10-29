#include <stdio.h>
#include <math.h>
void Arctg(int x, int z){
    double son=x;
    for(int i=1; i<=z*2+1; i++){
    son+=(pow(-1, i)*pow(x,i))/i;
    // x=2; 2-8
    }
    printf("<<Natija>>: %lf\n",son);
    }
    int main (){
         while(1){
    int X, z1, z2, z3;
    printf("Enter the X term:");
    scanf("%d",&X);
    printf("Enter the z1 term:");
    scanf("%d",&z1);
    printf("Enter the z2 term:");
    scanf("%d",&z2);
    printf("Enter the z3 term:");
    scanf("%d",&z3);

    Arctg(X,z1);
    Arctg(X,z2);
    Arctg(X,z3);
      }
    return 0;
    }