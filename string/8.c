#include <stdio.h>
#include <stdlib.h>
  int main (){
    while(1){
     int n=10;

         printf("N >>> ");
        scanf("%d",&n);

        char belgi='t';
         char satr[n];

          int count=0;
        for(int i=0; i<n; i++){
         satr[i]= belgi;
          count++;
          }

          satr[n]='\0';
         printf("%s \n",satr);
          printf("soni: %d\n",count);
           }

         return 0;
    }