#include <stdio.h>
#include <stdlib.h>
int main (){
    while (1){
int A, B;
  printf("Enter the A term :");
  scanf ("%d",&A);
  printf("Enter the B term :");
  scanf ("%d",&B);
  if(A!=B){
    if(A>B)printf("Kattasi_A:%d\n",A);
    else printf("Kattasi_B: %d\n",B);
  }else{
    printf("A va B teng: %d\n",0);
  }
       }
       return 0;
}
