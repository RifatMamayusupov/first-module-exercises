#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
    // Note: uchta sondan ikkitasi teng bo'lishi kerak6
    while (1){
int A, B, C;
  printf("Enter the A term :");
  scanf ("%d",&A);
  printf("Enter the B term :");
  scanf ("%d",&B);
  printf("Enter the C term :");
  scanf ("%d",&C);
 if(A==B)printf("C_tartib raqami:%d\n",3);
 if(B==C)printf("A_tartib raqami:%d\n",1);
 if(A==C)printf("B_tartib raqami:%d\n",2);
    }
    return 0;
}
