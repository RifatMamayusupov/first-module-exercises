#include <stdio.h>
#include <math.h>
  void digitcount(int k, int *count){
    *count=0;
     int sum;
    while(k!=0){
        sum=k%10;
        ++*count;
        k/=10;
    }
     printf("Raqamlar_soni: %i\n",*count);
}
 
int main()
{    
    while(1){
    int son1, son2, son3, son4;
    printf("son1 >>> ");
    scanf("%d",&son1);
    printf("son2 >>> ");
    scanf("%d",&son2);
    printf("son3 >>> ");
    scanf("%d",&son3);
    printf("son4 >>> ");
    scanf("%d",&son4);

       int count ;
     digitcount(son1, &count);
     digitcount(son2, &count);
     digitcount(son3, &count);
     digitcount(son4, &count);}
      return 0;

   }
