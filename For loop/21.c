#include <stdio.h>
#include <math.h>
int main (){
    while(1){
        int n; 
        float s=1, s1=1;
        printf("Enter the N term:");
        scanf("%d",&n);
        for(int  i=1; i<=n; i++){
            s*= i;
           s1+=(1)/s;
            printf("%d!=%f\n",i,s1);
        }
    }
    return 0;
}
        