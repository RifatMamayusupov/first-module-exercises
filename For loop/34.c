#include <stdio.h>
#include <math.h>
int main (){
    while(1){
int n; float A1=1, A2=2,Ak;
printf("Enter the N term :");
scanf("%d",&n);
for(float i=1; i<n; i++){
    Ak=(A1+2*(A2))/3;
     A1=A2;
     A2=Ak;
    printf("Natija: %f\n",Ak);
}
    }
    return 0;
}