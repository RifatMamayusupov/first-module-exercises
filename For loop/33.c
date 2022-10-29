#include <stdio.h>
#include <math.h>
int main (){
    while(1){
int n; float F1=1, F2=1,F3;
printf("Enter the N term :");
scanf("%d",&n);
for(int i=1; i<n; i++){
  F3=F1+F2;
  F1=F2;
  F2=F3;
  printf("Natija:%f\n",F3);
}
    }
    return 0;
}