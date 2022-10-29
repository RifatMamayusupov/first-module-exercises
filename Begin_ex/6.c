#include <stdio.h>
#include <math.h>

int main(){
    while(1){
int a,b,c;
int V,S;
printf(" Enter  the A term: ");
scanf("%d", &a);
printf(" Enter  the B term: ");
scanf("%d", &b);
printf(" Enter  the C term: ");
scanf("%d", &c);

V=a*b*c;
printf("Hajmi: %d\n", V);
S=2*(a*b+b*c+a*c);
printf("To'la_sirti: %d\n", S);
    }
    return 0;
}
