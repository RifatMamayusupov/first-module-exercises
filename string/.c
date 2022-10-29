#include <stdio.h>
#include <string.h>
#include <stdlib.h>
  int main (){
     char c='t';
     char   s1[]="hello tashkent", s[]="aloqada";
     int counter=0;
     for(int i=0; i<strlen(s1); i++){
       printf("%c",s1[i]);
         for(int j=0; j<strlen(s);j++){
            if(c==s1[i]){
                printf("%c",s[i]);
            }
         }
     }
     
         return 0;
  }