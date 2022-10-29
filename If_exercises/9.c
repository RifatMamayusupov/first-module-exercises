#include <stdio.h>
#include <stdlib.h>
int main (){
    while (1){
int A, B,almashuv;
  printf("Enter the A term :");
  scanf ("%d",&A);
  printf("Enter the B term :");
  scanf ("%d",&B);
  if(A>B){
    almashuv=A;
    A=B;
    B=almashuv;
    printf("_kichiGi_A: %d va _Kattasi_B:%d\n",A,B);
         }
  else {
    almashuv=B;
    B=A;
    A=almashuv;
    printf("_kichigi_A:%d va _Kattasi_B:%d\n",B,A);
  }
    }
    return 0;
}