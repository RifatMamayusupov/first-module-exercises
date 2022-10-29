#include <stdio.h>
#include <math.h>
 void SumRange(int a, int b){
    int sum=0;
    if(a<b){
    for(int i=a; i<=b; i++){
        sum+=i;
        }
    printf("%d_dan %d_gacha Sonlar yig'indisi:%d\n",a,b,sum);
               }
    if(a>b){
        printf("0_qiymatni o'zlashtirildi !\n");
      }
 }
 int main (){
    while(1){
    int A, B, C;
     printf("Enter the A term:");
    scanf("%d",&A);
     printf("Enter the B term:");
    scanf("%d",&B);
     printf("Enter the C term:");
    scanf("%d",&C);

     SumRange(A,B);
     SumRange(B,C);
         }
     return 0;
 }