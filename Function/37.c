#include <stdio.h>
#include <math.h>
    void Power1(int A, double B){
    int darjasi;
        darjasi=pow(A,B);
     printf("Natija:%d\n",darjasi);
    }
 int main (){
    while(1){
    int a, b, c;
    double A1, B1, C1;
    printf("A>>> ");
    scanf("%d",&a);
    printf("B>>> ");
    scanf("%d",&b);
    printf("C>>> ");
    scanf("%d",&c);
    printf("A1>>>" );
    scanf("%lf",&A1);
    printf("B1>>>" );
    scanf("%lf",&B1);
    printf("C1>>>" );
    scanf("%lf",&C1);

     Power1(a,A1);
     Power1(b,B1);
     Power1(c,C1);
    }
     return 0;
 }