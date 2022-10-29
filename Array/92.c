#include <stdio.h>
#include <stdlib.h>
 int main (){
    while(1){
        int n, i, k, m;
        printf("N >>>");
        scanf("%d",&n);
        printf("K >>>");
        scanf("%d",&k);
        printf("M >>>");
        scanf("%d",&m);

int son[n];
        for(i=0; i<n; i++){
            printf("son[%d]=",i);
            scanf("%d",&son[i]);
        }
int a=0;
for(i=0; i<n; i++){
    if(son[i]= son[i+(son[m]-son[k])])
    a++;
}   
for(i=0; i<a+1; i++){
    printf("son[%d]=%d\n",i,son[i]);
}

    }
     return 0;
 }