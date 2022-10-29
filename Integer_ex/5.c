#include <stdio.h>
#include <math.h>
//    A>B
  int main (){
    while(1){
  float A, B;
  int soni;
  float soni2;
   printf("Enter the A term: ");
   scanf("%f", &A);
   printf("Enter the B term: ");
   scanf("%f", &B);
       soni=A/B;
   printf("%.0f_kesmasi %.0f_kesmasiga %dmarta_joylashadi.\n",B,A,soni);    
       soni2=A/B-soni;
   printf("Joylasmagan_qismi: %f\n", soni2);
    }
    return 0;
  }
