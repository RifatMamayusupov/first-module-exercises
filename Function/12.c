#include <stdio.h>
void SortLn(int a, int b, int c){

    if(a>b && b>c) printf("Eng_kichigi:%d va O'rtanchasi:%d va Eng_kattasi:%d\n",c,b,a);
    if(a>c && c>b) printf("Eng_kichigi:%d va O'rtanchasi:%d va Eng_kattasi:%d\n",b,c,a); 
    if(b>a && a>c) printf("Eng_kichigi:%d va O'rtanchasi:%d va Eng_kattasi:%d\n",c,a,b);
    if(b>c && c>a) printf("Eng_kichigi:%d va O'rtanchasi:%d va Eng_kattasi:%d\n",a,c,b);
    if(c>a && a>b) printf("Eng_kichigi:%d va O'rtanchasi:%d va Eng_kattasi:%d\n",b,a,c);
    if(c>b && b>a) printf("Eng_kichigi:%d va O'rtanchasi:%d va Eng_kattasi:%d\n",a,b,c);

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