#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// n>2
int main (){
    while(1){
int n;
printf("N >>>");
scanf("%d",&n);

int A, B, a[n];
 printf("A >>> ");
scanf("%d",&A);
 printf("B >>> ");
scanf("%d",&B);
a[0]=A, a[1]=B;
for(int i=2; i<=n; i++){
    a[i]=A+B;
    A=B;
    B=a[i];
    printf("[%d]=%d\n",i,a[i]);
    }
  }
    return 0;
}
