#include <stdio.h>
#include <stdlib.h>
int main () {
    while (1){
int son, son1;
printf("Enter the Son term :");
scanf("%d",&son);
printf("Enter the Son1 term :");
scanf("%d", &son1);
if(son>son1) printf("Son_katta: %d va Son1_kichkina:%d\n",son,son1);
else printf("Son1_katta:%d va Son_kichkina:%d\n",son1,son);
    }
    return 0;
}
