#include <stdlib.h>
#include <stdio.h>
#include <math.h>
//  eng yaqini topish kerak ;
int main (){
    while(1){
    int n, i, r;
    printf("N >>> ");
    scanf("%d",&n);
    printf("R >>> ");
    scanf("%d",&r);

    int son[n];
    for(i=0; i<n; i++){
        printf("son[%d]=",i);
        scanf("%d",&son[i]);
    }
// R soni ga eng yaqin ikkita massive elemntlari yog'indisi :
    int min= abs(son[0]+son[1]-r), a=1;
    for(i=2; i<n; i++){
        if(abs((son[i-1]+son[i])-r)<min){
         min=abs((son[i-1]+son[i])-r);
           a=i;
         }
    }
    printf("%d va %d\n", son[a-1], son[a]);
    }
    return 0;
}
    