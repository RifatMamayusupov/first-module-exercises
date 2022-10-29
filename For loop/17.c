#include <stdio.h>
#include <math.h>
int main (){
    while(1){
        int n,a,s;
        printf("Enter the N term:");
        scanf("%d",&n);
        printf("Enter the A term:");
        scanf("%d",&a);
        for(int i=1; i<=n; i++){
            s+=pow(a,i);
            printf("Natija: %d\n",s);
           }
        }
        return 0;
}