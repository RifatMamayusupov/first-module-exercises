#include <stdio.h>
#include <math.h>
int main (){
int  i;
  int son, son1=1, son2=2;
    for(i=1; i<10; i++){
        son=i+1;
      ( i+1)=i+2;
       son1=son2;
       son2=son;

        printf("%d\n",son);
    }
    return 0;
}

// 1+2/2=1.5
//2+3/2=2.5
//3+4/2=3.5
