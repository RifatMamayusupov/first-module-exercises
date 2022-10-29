#include <stdio.h>
#include <math.h>
  void Even(int K){
    if(K%2==0)printf("%d_son juft: True\n",K);
    else printf("%d_son toq: False\n",K);
  }
  int main (){
    while(1){
    int son, son1, son2;
     printf("Enter the son term:");
    scanf("%d",&son);
     printf("Enter the son1 term:");
    scanf("%d",&son1);
     printf("Enter the son2 term:");
    scanf("%d",&son2);

     Even(son);
     Even(son1);
     Even(son2);
    }
     return 0;
  }