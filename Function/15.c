#include <stdio.h>
#include <math.h>
void numberofroots(double *a, double *b, double *c){
    double D;
    D=(*b)*(*b)-(4*(*a)*(*c));
   if(D>0){printf("Ildizlar_soni:2\n");}
   if(D==0){printf("Ildizlar_soni:1\n");}
   if(D<0) {printf("Ildizlar_soni:0\n");}

}
int main (){
    while(1){
    double A, B, C;
       printf("Enter the A term:");
    scanf("%lf",&A);
       printf("Enter the B term:");
    scanf("%lf",&B);
       printf("Enter the C term:");
    scanf("%lf",&C);

    numberofroots(&A,&B,&C);
   }
    return 0;
}