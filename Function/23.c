#include <stdio.h>
#include <math.h>

 void Quarter(int x, int y){
    
    if(x>0 && y>0)  printf("%d_va %d_sonlar nuqtasi %d- chorakda\n",x,y,1);
    if(x<0 && y>0)  printf("%d_va %d_sonlar nuqtasi %d- chorakda\n",x,y,2);
    if(x<0 && y<0)  printf("%d_va %d_sonlar nuqtasi %d- chorakda\n",x,y,3);
    if(x>0 && y<0)  printf("%d_va %d_sonlar nuqtasi %d- chorakda\n",x,y,4);
 }
 int main (){
    while (1){
    
    int X, Y;
     printf("Enter the X term:");
    scanf("%d",&X);
     printf("Enter the Y term:");
    scanf("%d",&Y);

    Quarter(X,Y);
    }
    return 0;
 }