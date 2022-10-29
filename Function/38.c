#include <stdio.h>
#include <math.h>
    void Power1(double A, int N){
    double  darjasi;
    for(int i=0; i<=N; i++){
    if(A>0){
            darjasi=pow(A,N);
         }else {
            darjasi=1/pow(A,N);
         }
            }
            printf("Natija:%lf\n",darjasi);
       }
        int main (){
        while(1){
        int A, N, M, K;
         printf("Enter the A term:");
        scanf("%d",&A);
         printf("N >>> ");
        scanf("%d",&N);
         printf("M >>> ");
        scanf("%d",&M);
         printf("K >>> ");
        scanf("%d",&K);

        Power1(A,N);
        Power1(A,M);
        Power1(A,K);
    }
        return 0;

       }