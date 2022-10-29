#include <stdio.h>
#include <math.h>
int EKUB(int son1, int son2){
    while((son1!=0) && (son2!=0)){
        if(son1>son2) son1%=son2;
        else son2%=son1;
    }
    return son1+son2;
}
void EKUK(int son1, int son2){
    double EKUK=son1*son2/EKUB(son1,son2);
    printf("%d va %d sonlarining EKUK_GI %lf ga teng..\n", son1, son2, EKUK);
}
int main (){
    while(1){
    int a, b, c, d;
    printf("a >>> ");
    scanf("%d",&a);
    printf("b >>> ");
    scanf("%d",&b);
    printf("c >>> ");
    scanf("%d",&c);
    printf("d >>> ");
    scanf("%d",&d);

    EKUK(a,b);
    EKUK(a,c);
    EKUK(a,d);
    }
    return 0;
}