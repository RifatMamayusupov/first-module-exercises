#include <stdio.h>
#include <math.h>
int main (){
    while (1){
        float second;
        float minut;
        printf("Enter the second term: ");
        scanf("%f", &second);

        minut=second/60;
        printf("%.0f_second teng %f_minutga\n",second,minut);
    }
    return 0;
}