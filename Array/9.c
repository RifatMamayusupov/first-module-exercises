#include <stdio.h>
#include <math.h>
#include <math.h>
int main (){
    while(1){
int n, i;
printf("N >>> ");
scanf("%d",&n);

int son[n], count=0;
for(i=0; i<=n;++i){
    printf("son[%d]=",i);
    scanf("%d",&son[i]);
}
for(i=n; i>=0; i--){
    if(son[i]%2==0){
    printf("%d\n",son[i]);
    count++;
    }
}
printf("soni:%d\n",count);
}
    return 0;
}