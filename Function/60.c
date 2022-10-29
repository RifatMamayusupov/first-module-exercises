#include <stdio.h>
#include <math.h>
void Area(double x1, double x2, double y1, double y2){
    double Pe1,Pe2, Pe3;
    double  S1, S2, S3;
    Pe1=fabs(x1+x2+y1);
    S1=2/fabs(x1-x2)*sqrt(Pe1*(Pe1-x1)*(Pe1-x2)*(Pe1-y1));
    Pe2=fabs(x1+x2+y2);
    S2=2/fabs(x1-x2)*sqrt(Pe2*(Pe2-x1)*(Pe2-x2)*(Pe2-y2));
    Pe3=fabs(x1+y1+y2);
    S3=2/fabs(x1-y1)*sqrt(Pe3*(Pe3-x1)*(Pe3-y1)*(Pe3-y2));

    printf("%lf va %lf , %lf tomonli uch_burchak_Balandligi(asosga): %lf\n",x1, x2, y1, S1);
    printf("%lf va %lf , %lf tomonli uch_burchak_Balandligi(asosga): %lf\n",x1, x2, y2, S2);
    printf("%lf va %lf , %lf tomonli uch_burchak_Balandligi(asosga): %lf\n",x1, y1, y2, S3);
}
int main (){
    while(1){
    double A, B, C, D;
     printf("A >>> ");
    scanf("%lf",&A);
     printf("B >>> ");
    scanf("%lf",&B);
     printf("C >>> ");
    scanf("%lf",&C);
     printf("D >>> ");
    scanf("%lf",&D);

    Area(A, B, C, D);
    }
    return 0;
}