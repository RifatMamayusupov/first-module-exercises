#include <stdio.h>
#include <math.h>
int main (){
    while(1){
int n; float A1=1, A2=2, A3=3, Ak;
printf("Enter the N term :");
scanf("%d",&n);
for(int i=3; i<n; i++){
    Ak=A3+A2-2*A1;
    A1=A2;
    A2=A3;
    A3=Ak;
    printf("Natija:%f\n",Ak);
}
    }
    return  0;
}
     