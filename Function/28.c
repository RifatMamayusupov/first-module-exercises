#include <stdio.h>
#include <math.h>
void IsPrime(int n){

    int t=0;
    for(int i=2; i<n; i++){
    if(n%i==0){ 
    t++; 
          }
       }
    if(t>0){
    printf("False \n");}
    else {printf("True \n");
    }
           }
    int main (){
    while (1)
        {
    int n;
    printf(">>> ");
    scanf("%d",&n);
    IsPrime(n);
    } 
    return 0;
 
}