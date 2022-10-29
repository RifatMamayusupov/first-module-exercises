#include <stdio.h>
#include <math.h>
  void PowerA234 (float son){
    
       float qiymat,qiymat1, qiymat2;
       qiymat=pow(son,2);
       qiymat1=pow(son,3);
       qiymat2=pow(son,4);

       printf("Natija: %f\n",qiymat);
       printf("Natija: %f\n",qiymat1);
       printf("Natija: %f\n",qiymat2);
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

PowerA234(A);
PowerA234(B);
PowerA234(C);

}
  return 0;
  }