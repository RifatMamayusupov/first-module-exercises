#include <stdio.h>
#include <math.h>
int main (){
    while(1){
int son,son1;
printf("Enter the Son term:");
scanf("%d",&son);
printf("Enter the Son1 term:");
scanf("%d",&son1);

if(9<son && son>99 || son%2==0) printf("Son ikki_xonali juft son;\n");
if(99<son1 && son1>=999 || son1%2!=0) printf("Son uch_xonali toq son;\n");
    }
    return 0;
}