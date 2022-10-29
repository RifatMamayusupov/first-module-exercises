#include <stdio.h>
#include <math.h>
void RingS(int R, int R2){
    if(R!=R2){
        double Pi=3.14, S, S2;
        S=Pi*pow(R,2);
        S2=Pi*pow(R2,2);
        printf("Doira_1 yuzasi:%lf\n",S);
        printf("Doira_2 yuzasi:%lf\n",S2);
    }
}
int main (){
    while (1){
    
    int Radious, Radious2;
     printf("Enter the Radious term:");
    scanf("%d",&Radious);
     printf("Enter the Radious2 term:");
    scanf("%d",&Radious2);

    RingS(Radious,Radious2);
    }
    return 0;
    }