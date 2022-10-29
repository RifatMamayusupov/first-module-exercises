#include <stdio.h>
#include <math.h>
  void Triangle(float son, float son1, float son2){
      float Pra, S;
      Pra=son+son1+son2;
      S=sqrt(Pra*(Pra-son)*(Pra-son1)*(Pra-son2));
      printf("Natija: %f\n",Pra);
      printf("Natij: %f\n",S);
      printf("\n");
  }
    int main (){
        while(1){
        float A, B, C;
printf("Enter the A term:");
scanf("%f",&A);
printf("Enter the B term:");
scanf("%f",&B);
printf("Enter the C term:");
scanf("%f",&C);

 Triangle(A,B,C);
      }
   return 0;
    }