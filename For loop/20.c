#include <stdio.h>
#include <math.h>
int main (){
    while(1){
        int n,s=1,s1=0;
        printf("Enter the N term:");
        scanf("%d",&n);
      for(int i=1; i<=n; i++){
        s*=i;
        s1+=s;
        printf("%d!=%d\n",i, s1);
        }
    }
    return 0;
}