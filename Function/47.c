#include <stdio.h>
#include <math.h>
int EKUB(int a ,int b){
    while ((a!=0)&&(b!=0)){
        if (a>b) a%= b;
        else b%=a;
    }
    return a+b;
}

  void frac1(int a, int b, int *p, int *q){

    *p=a/EKUB(a,b);
    *q=b/EKUB(a,b);   
}
 int main (void){
    int a, b, c, d, e, f, g, h, sum1, sum2;
      printf("a >>> ");
    scanf("%d",&a);
      printf("b >>> ");
    scanf("%d",&b);
      printf("c >>> ");
    scanf("%d",&c);
      printf("d >>> ");
    scanf("%d",&d);
      printf("e >>> ");
    scanf("%d",&e);
      printf("f >>> ");
    scanf("%d",&f);
      printf("g >>> ");
    scanf("%d",&g);
      printf("h >>> ");
    scanf("%d",&h);
     frac1(a*d+c*b,b*d,&sum1,&sum2);
    printf("%i/%i\n",sum1,sum2);
    frac1(a*f+e*b,b*f,&sum1,&sum2);
    printf("%i/%i\n",sum1,sum2);
    frac1(a*h+g*b,b*h,&sum1,&sum2);
    printf("%i/%i\n",sum1,sum2);

    return 0;
 }

