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
//  eslatma : har doim eng kichik massive so'ralsa belbilash kirgizish kerak; 
    int min=abs(son[0]-r), son1=1;
    for(i=1; i<n; i++){
        if(abs(son[i]-r)<min) {
            min=abs(son[i]-r);
            son1=i;
        }
    }
    printf("%d \n",son[son1]);
    
    }
    return 0;
}