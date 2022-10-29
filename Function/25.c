#include <stdio.h>
#include <math.h>
  void Issquare(int K, int son){
  
    if(K==pow(son,2))printf("%d_soni %d_sonining Kvadrati: True\n",K,son);
    else printf("%d_soni %d_sonining Kvadrati emas: False\n",K,son);

  }
  int main (){
    while(1){
    int son, son1, son2, k;
    printf("Enter the K term:");
    scanf("%d",&k);
    printf("Enter the Son term:");
    scanf("%d",&son);
    printf("Enter the Son1 term:");
    scanf("%d",&son1);
    printf("Enter the Son2 term:");
    scanf("%d",&son2);

      Issquare(k,son);
      Issquare(k,son1);
      Issquare(k,son2);
          }
      return 0;
  }