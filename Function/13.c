#include <stdio.h>
void SortLn(int a, int b, int c){

    if(a>b && b>c) printf("Eng_kattasi:%d va O'rtanchasi:%d va Eng_kichkinasi:%d\n",a,b,c);
    if(a>c && c>b) printf("Eng_kattasi:%d va O'rtanchasi:%d va Eng_kichkinasi:%d\n",a,c,b); 
    if(b>a && a>c) printf("Eng_kattasi:%d va O'rtanchasi:%d va Eng_kichkinasi:%d\n",b,a,c);
    if(b>c && c>a) printf("Eng_kattasi:%d va O'rtanchasi:%d va Eng_kichkinasi:%d\n",b,c,a);
    if(c>a && a>b) printf("Eng_kattasi:%d va O'rtanchasi:%d va Eng_kichkinasi:%d\n",c,a,b);
    if(c>b && b>a) printf("Eng_kattasi:%d va O'rtanchasi:%d va Eng_kichkinasi:%d\n",c,b,a);

}
int main (){
    while (1){
    int A1,B1,C1;
     printf("Enter the A1 term:");
    scanf("%d",&A1);
     printf("Enter the B1 term:");
    scanf("%d",&B1);
     printf("Enter the C1 term:");
    scanf("%d",&C1);

    SortLn(A1,B1,C1);
    }
    return 0;
}