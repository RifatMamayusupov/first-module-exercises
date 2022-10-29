#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
    // Note: to'rta sondan uchtasi teng bo'lishi kerak6
    while (1){
int A, B, C, D;
  printf("Enter the A term :");
  scanf ("%d",&A);
  printf("Enter the B term :");
  scanf ("%d",&B);
  printf("Enter the C term :");
  scanf ("%d",&C);
  printf("Enter the D term :");
  scanf ("%d",&D);
 if(A==B && B==C)printf("D_tartib raqami:%d\n",4);
 if(B==C && C==D)printf("A_tartib raqami:%d\n",1);
 if(C==D && D==A)printf("B_tartib raqami:%d\n",2);
 if(B==D && D==A)printf("C_tartib raqami:%d\n",3);
    }
    return 0;
}
