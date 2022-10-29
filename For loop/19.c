 #include <stdio.h>
#include <math.h>
int main (){
    while(1){
        int n,s=1;
        printf("Enter the N term:");
        scanf("%d",&n);
      for(int i=1; i<=n; i++){
        s*=i;
        printf("%d!=%d\n",n,s);
      }
    }
    return 0;
}