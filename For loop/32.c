#include <stdio.h>
#include <math.h>
  int main (){
    while(1){
int n; float A=1;
printf("Enter the N term:");
scanf("%d",&n);
for(int i=1; i<n; i++){
    A=(A+1)/A;
    printf("Natija: %f\n",A);
}
    }
    return 0;
  }