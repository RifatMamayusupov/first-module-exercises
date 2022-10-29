#include <stdio.h>
#include <math.h>
void power4(int x, int a, int z){
    double son=1; int z1=1;
    for(int i=1; i<z+1; i++){
     z1*=i;
     son+=(a-i+1)*pow(x,i)/z1;
    }
     printf("<<Natija>>: %lf\n",son);
    }
   int main (){
         while(1){
    int X, a, z1, z2, z3;
    printf("Enter the X term:");
    scanf("%d",&X);
    printf("Enter the A term:");
    scanf("%d",&a);
    printf("Enter the z1 term:");
    scanf("%d",&z1);
    printf("Enter the z2 term:");
    scanf("%d",&z2);
    printf("Enter the z3 term:");
    scanf("%d",&z3);

    power4(X,a,z1);
    power4(X,a,z2);
    power4(X,a,z3);
      }
      return 0;
   }