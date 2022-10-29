#include <stdio.h>
#include <math.h>
  void PowerA3(int son){
    int qiymat;
    qiymat=pow(son,3);
    printf("NAtija:%d\n",qiymat);
    
     return;
  }
  int main(){
        while(1){
     int A, B, C, D, E;
     printf("Enter the A term:");
     scanf("%d",&A);
      printf("Enter the B term:");
     scanf("%d",&B);
      printf("Enter the C term:");
     scanf("%d",&C);
      printf("Enter the D term:");
     scanf("%d",&D);
      printf("Enter the E term:");
     scanf("%d",&E);

     PowerA3(A);
     PowerA3(B);
     PowerA3(C);
     PowerA3(D);
     PowerA3(E);
     }
  }
