#include <stdio.h>
#include <math.h>
int main (){
    while(1){
        int n, qiymat;
        printf("Enter the N term:");
        scanf("%d",&n);
        for(int i=1; i<=n; i++){
        qiymat=pow(i,i);
        printf("%d_ning %d_darajasi=%d\n",i,i,qiymat);
        }
    }
    return 0;
}