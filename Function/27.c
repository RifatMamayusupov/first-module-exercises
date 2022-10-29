#include <stdio.h>
int IspowerN (int K, int N){
    float term=K;
    for(; term>=N; term/=N);
    return term==1;
}
int main (){
    while(1){
      int son=0, i, N;
      printf("Enter the N term:");
      scanf("%d",&N);
      for(i=1; i<10; i++){
        int K;
        printf("K=");
        scanf("%d",&K);
        son+=IspowerN(K,N);
     }
    printf("Natija:%d\n",son);
       }
    return 0;
}