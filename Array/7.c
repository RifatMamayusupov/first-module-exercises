#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 int main (){
    while(1){
    int n;
    printf("N >>> ");
    scanf("%d",&n);
    int sonlar[n];
    for(int i=n; i>=1; i--){
    sonlar[i]=i;
    printf("[%d]\n",sonlar[i]);
    }
 }
    return 0;
 }