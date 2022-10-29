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
  if(A>B && B>C)printf("_Ikkita eng katta sonlar yig'indi:%d\n",A+B);
  if(A>C && C>B)printf("_Ikkita eng katta sonlar yig'indi:%d\n",C+A);
  if(B>C && C>A)printf("_Ikkita eng katta sonlar yig'indi:%d\n",A+C);
  if(B>A && A>C)printf("_Ikkita eng katta sonlar yig'indi:%d\n",A+B);
  if(C>A && A>B)printf("_Ikkita eng katta sonlar yig'indi:%d\n",A+C);
  if(C>B && B>A)printf("_Ikkita eng katta sonlar yig'indi:%d\n",B+C);
    }
    return 0;
}
