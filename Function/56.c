#include <stdio.h>
#include <math.h>
void Perim(int x1, int x2, int y1, int y2){
    int Pe1, Pe2, Pe3;
    Pe1=abs(x1+x2+y1);
    Pe2=abs(x1+x2+y2);
    Pe3=abs(x1+y1+y2);

    printf("%d va %d , %d tomonli uch_burchak_perematri: %d\n",x1, x2, y1, Pe1);
    printf("%d va %d , %d tomonli uch_burchak_perematri: %d\n",x1, x2, y2, Pe2);
    printf("%d va %d , %d tomonli uch_burchak_perematri: %d\n",x1, y1, y2, Pe3);
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

    Perim(A, B, C, D);
    }
    return 0;
}