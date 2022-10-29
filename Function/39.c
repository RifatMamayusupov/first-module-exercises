#include <stdio.h>
#include <math.h>
void Power3(int A, int N){
    int daraja;
    if(N>0){
    for(int i=1; i<=N; i++){
    daraja=pow(A,N);
        }
    }
    else {
    daraja=pow(A,N);
     }
    printf("%d_sonining %d_darajasi qiymati:%d\n",A,N,daraja);
    }
    int main (){
    while (1)
      {
  int A, N, M, K;
  printf("Enter the A term:");
  scanf("%d",&A);
   printf("N >>> ");
  scanf("%d",&N);
   printf("M >>> ");
  scanf("%d",&M);
   printf("K >>> ");
  scanf("%d",&K);
    
   Power3(A,N);
   Power3(A,M);
   Power3(A,K);
  }
    return 0;
  }