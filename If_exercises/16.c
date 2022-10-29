#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
    while (1){
int A, B, C;
  printf("Enter the A term :");
  scanf ("%d",&A);
  printf("Enter the B term :");
  scanf ("%d",&B);
  printf("Enter the C term :");
  scanf ("%d",&C);
  if(A<B && B<C){
  A= pow(A,2);
  B= pow(B,2);
  C= pow(C,2);
   printf("Sonlar ikkilantirildi:%d, %d, %d\n",A,B,C);
  } else{
    A=-A;
    B=-B;
    C=-C;
    printf("Sonlar teskari ishoraga o'zgariltirildi:%d, %d, %d\n",A,B,C);
  }
    }
    return 0;
}
