#include <stdio.h>
#include <math.h>
int  Ispower5(int k){
    int term=k;
    for( ; term>=5; term/=5);
    return term==1;
   
}
int main (){
    int son=0,i;
    for(i=1; i<10; i++){
       int k;
       scanf("%d",&k);
       son+=Ispower5(k);
    }
printf("Soni =%d\n",son);
    return 0;

}