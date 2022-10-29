#include <stdio.h>
#include <math.h>
void Leng(int x1, int x2, int y1, int y2){
    int length1, length2, length3;
    length1=abs(x1-y1);
    length2=abs(x1-x2);
    length3=abs(x1-y2);

    printf("%d va %d ning distensi teng: %d\n",x1, y1,length1);
    printf("%d va %d ning distensi teng: %d\n",x1, x2,length2);
    printf("%d va %d ning distensi teng: %d\n",x1, y2,length3);
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

    Leng(A, B, C, D);
    }
    return 0;
}