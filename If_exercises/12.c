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
  if(A>B && B>C)printf("_kichiGi:%d\n",C);
  if(A>C && C>B)printf("_kichiGi:%d\n",B);
  if(B>C && C>A)printf("_kichiGi:%d\n",A);
  if(B>A && A>C)printf("_kichiGi:%d\n",C);
  if(C>A && A>B)printf("_kichiGi:%d\n",B);
  if(C>B && B>A)printf("_kichiGi:%d\n",A);
    }
    return 0;
}
