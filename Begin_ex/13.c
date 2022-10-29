#include <stdio.h>
#include <math.h>

int main(){
    while(1){
int R1,R2;
float Pi=3.14;
float S1, S2,S3;
printf(" Enter  the R1 term: ");
scanf("%d", &R1);
printf(" Enter  the R2 term: ");
scanf("%d", &R2);

S1=Pi*R1;
S2=Pi*R2;
S3=Pi*(R1-R2);
printf("Natija: %f\n", S3);
    }
    return 0;
}
