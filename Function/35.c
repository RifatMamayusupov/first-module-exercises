#include <stdio.h>
#include <math.h>
 void fact2(int n){
    int i, multiple=1;
     for(i=n; i>=1; i-=2){
        multiple*=i;
       }
     
     printf("%d!_ning ikkilangan qiymati:%d\n",n,multiple);
  }
 int main (){
    while (1)
       {
    int a, b, c;
     printf("A >>> ");
    scanf("%d",&a);
     printf("B >>> ");
    scanf("%d",&b);
     printf("C >>> ");
    scanf("%d",&c);

      fact2(a);
      fact2(b);
      fact2(c);
   }
      return 0;
 }