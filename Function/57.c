#include <stdio.h>
#include <math.h>
void Area(int x1, int x2, int y1, int y2){
    int Pe1,Pe2, Pe3;
    int  S1, S2, S3;
    Pe1=abs(x1+x2+y1);
    S1=sqrt(Pe1*(Pe1-x1)*(Pe1-x2)*(Pe1-y1));
    Pe2=abs(x1+x2+y2);
    S2=sqrt(Pe2*(Pe2-x1)*(Pe2-x2)*(Pe2-y2));
    Pe3=abs(x1+y1+y2);
    S3=sqrt(Pe3*(Pe3-x1)*(Pe3-y1)*(Pe3-y2));

    printf("%d va %d , %d tomonli uch_burchak_Area: %d\n",x1, x2, y1, S1);
    printf("%d va %d , %d tomonli uch_burchak_Area: %d\n",x1, x2, y2, S2);
    printf("%d va %d , %d tomonli uch_burchak_Area: %d\n",x1, y1, y2, S3);
}
int main (){
    while(1){
    int A, B, C, D;
     printf("A >>> ");
    scanf("%d",&A);
     printf("B >>> ");
    scanf("%d",&B);
     printf("C >>> ");
    scanf("%d",&C);
     printf("D >>> ");
    scanf("%d",&D);

    Area(A, B, C, D);
    }
    return 0;
}