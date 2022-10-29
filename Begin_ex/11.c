#include <stdio.h>
#include <math.h>

int main(){
    while(1){
int a,b;
int Yigindisi, Kopaytmasi, Model_1,Model_2;
printf(" Enter  the A term: ");
scanf("%d", &a);
printf(" Enter  the B term: ");
scanf("%d", &b);

Yigindisi=a+b;
printf("Yigind: %d\n", Yigindisi);
Kopaytmasi=a*b;
printf("Kopaytmasi: %d\n",Kopaytmasi);
Model_1=fabs(a);
Model_2=fabs(b);
printf("Model_1:%d\n  va  Model_2: %d\n", Model_1,Model_2);
    }
    return 0;
}
