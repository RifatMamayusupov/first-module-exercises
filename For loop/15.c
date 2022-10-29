#include <stdio.h>
#include <math.h>
int main (){
    while(1){
        int n,a,s=1;
        printf("Enter the N term:");
        scanf("%d",&n);
        printf("Enter the A term:");
        scanf("%d",&a);
        for(int i=1; i<=n; i++){
            s*=a;
            printf("Natija:%d\n",s);
        }
    }
    return 0;
}
