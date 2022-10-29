#include <stdio.h>
#include <math.h>
void Fib(int n){
    int son=0, son1=1, son2;
    for (int i=2; i<=n; i++){
    son2=son1+son;
    son=son1;
    son1=son2;
      }
      printf("fib: %d\n",son2);
    }
   int main (){
    while (1)
    {
    int N;
    printf("N>>> ");
    scanf("%d",&N);
    Fib(N);
  }
    return 0;
}