#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  int main (){
    while(1){
         int n;
         printf("N >>> ");
         scanf("%d",&n);

         char satr[100];
         printf("SATR ....");
         scanf("%s",&satr);
        
         char satr2[n];

         int satr_length=strlen(satr);
          int start= abs(satr_length-n);

           for(int i=0; i<n; i++){
            if (n<satr_length){
                satr2[i]=satr[start++];
             }else{
                satr2[i]='.';
            }
         }
            satr2[n]='\0';
         for(int i=start; i<satr_length+n; i++){
            satr2[i]=satr[i-start];
              printf("%s ",satr2);
                break;
         }
         printf("\n"); 
    }
    return 0;
  }


//    2-state;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  int main (){
    int n=25;
 char satr[]="Uzbekistan";
 char satr2[n];
 
 int satr_u=strlen(satr);// satr=10;
 int start=abs(satr_u-n);  //10-n(10-5)=5;

 if(n<satr_u){
    for(int i=0; i<n; i++){
      satr2[i]=satr[start++];
    }
 }

 if(n>satr_u){
      for(int i=0; i<n; i++){
        satr2[i]='.';
      }
 }
          // start=5; 
 for(int i=start; i< satr_u+n; i++){
    satr2[i]=satr[i-start];
 }

 printf("%s ",satr2);

    return 0;
  }
   