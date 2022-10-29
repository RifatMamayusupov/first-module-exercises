#include <stdio.h>
#include <math.h>
int main (){
    while(1){
int n , k, qiymat;
printf("Enter the N term:");
scanf("%d", &n);
printf("Enter the K term:");
scanf("%d", &k);
for(int i=1; i<=n;i++){
qiymat=pow(i,k);
printf("%d_ning %d_darajasi=%d\n",i,k,qiymat);
}
    }
    return 0;
}