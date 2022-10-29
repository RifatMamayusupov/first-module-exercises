#include <stdio.h>
#include <math.h>
void InTime(int H, int M, int S, int T){
    int soat, mminut , second;
    soat=H*3600+T;
    mminut=M*60+T;
    second=S+T;
    printf("%d soat %d_secondga oshirildi  va natija:%dsecond..\n", H,T, soat);
    printf("%d minut %d_secondga oshirildi va natija:%dsecond..\n", M,T, mminut);
    printf("%d second %d_secondga oshirildi va natija:%dsecond..\n", S,T, second);
}
int main (){
    while(1){
        int h, m, s, t;
         printf("h >>> ");
        scanf("%d",&h);
         printf("m >>> ");
        scanf("%d",&m);
         printf("s >>> ");
        scanf("%d",&s);
         printf("t >>> ");
        scanf("%d",&t);

        InTime(h,m,s,t);
    }
    return 0;
}