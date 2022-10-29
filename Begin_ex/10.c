#include <stdio.h>
#include <math.h>

int main(){
    while(1){
int a,b;
int Yigindisi, Kopaytmasi, Kvadrati1,Kvadrati2;
printf(" Enter  the A term: ");
scanf("%d", &a);
printf(" Enter  the B term: ");
scanf("%d", &b);

Yigindisi=a+b;
printf("Yigind: %d\n", Yigindisi);
Kopaytmasi=a*b;
printf("Kopaytmasi: %d\n",Kopaytmasi);
Kvadrati1=pow(a,2);
Kvadrati2=pow(b,2);
printf("Kavadrati1=%d\n va Kvadrati2=%d\n",Kvadrati1,Kvadrati2);
    }
    return 0;
}