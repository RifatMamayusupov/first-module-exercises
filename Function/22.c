#include <stdio.h>
#include <math.h>

  void Calc( double A, double B, int OP){
    double Natija;
    if(OP==1) {Natija=A-B;}
    if(OP==2) {Natija=A*B;}
    if(OP==3) {Natija=A/B;}
    if(OP==4) {Natija=A+B;}
    printf("%lf va %lf ning qiymati:%lf\n",A, B, Natija);
  }
  int main (){
    while (1)
    {
    double a, b; int op;
     printf("Enter the OP(1,2,3,4) term:");
    scanf("%d",&op);
     printf("Enter the A term:");
    scanf("%lf",&a);
     printf("Enter the B term:");
    scanf("%lf",&b);
    

    Calc(a,b,op);
   }
    return 0;
  }