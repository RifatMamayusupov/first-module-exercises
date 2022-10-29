#include <stdio.h>
#include <stdlib.h>
int main (){
    while (1){
int A, B, C;
  printf("Enter the A term :");
  scanf ("%d",&A);
  printf("Enter the B term :");
  scanf ("%d",&B);
  printf("Enter the C term :");
  scanf ("%d",&C);
  if(A>B && B>C)printf("_O'rtanchasi:%d\n",B);
  if(A>C && C>B)printf("_O'rtanchasi:%d\n",C);
  if(B>C && C>A)printf("_O'rtanchasi:%d\n",C);
  if(B>A && A>C)printf("_O'rtanchasi:%d\n",A);
  if(C>A && A>B)printf("_O'rtanchasi:%d\n",A);
  if(C>B && B>A)printf("_O'rtanchasi:%d\n",B);
    }
    return 0;
}
