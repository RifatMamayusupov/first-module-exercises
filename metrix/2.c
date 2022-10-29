#include <stdio.h>
#include <stdlib.h>
 int main (){
    while(1){
    int n, m, i, j;
    printf("N >>>");
    scanf("%d",&n);

    printf("M >>>");
    scanf("%d",&m);


int a[m][n];
for(i=0; i<m; i++){
    for(j=0; j<n; j++){
        a[i][j]=5*j;
        printf("%d\t",a[i][j]);
     }
    printf("\n");
}

    }
    return 0;
 }