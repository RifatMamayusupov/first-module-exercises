#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main (){
  while(1){
int n,i; int son =n;
 
printf("Enter the N term:");
scanf("%d", &n);

// printf("Enter the son term:");
// scanf("%d", &son);

 int  min =son, max=son;
for(i=0; i<n; i++){
scanf("%d",&son);

 if(min>son) min=son;
 if(max<son) max=son;

}
printf("%d is maximum va %d is minimum\n", max, min);
}
  return 0;
}