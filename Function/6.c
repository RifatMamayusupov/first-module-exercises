#include <stdio.h>
#include <math.h>
   void digitcountsum (int son, int *count, int *sum){
    *count=0;
    *sum=0;
    while(son!=0){
        *sum+=son%10;
        ++*count;
        son/=10;
    }
}
 
int main()
{
    int i;
    for(i=1;i<=5;++i){
        int son;
        printf("Enter the Son term:");
        scanf("%i", &son);
        int count,sum;
        digitcountsum(son, &count, &sum);
        printf("soni: %i\nYig'indi: %i\n",count,sum);
   }

      return 0;

   }