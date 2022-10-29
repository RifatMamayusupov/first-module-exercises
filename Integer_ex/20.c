#include <stdio.h>
#include <math.h>
int main (){
    while (1){
        float second;
        float hour;
        printf("Enter the second term: ");
        scanf("%f", &second);

        hour=second/3600;
        printf("%.0f_second teng %f_soatga\n",second,hour);
    }
    return 0;
}