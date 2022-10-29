#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void delete(char satr[], char satr1[]);
   
   int main (){

    char satr[]="hello uzbekistan qanday";

    printf("Before %s\n",satr);

    delete(satr, "qanday  ");

    printf("After %s\n",satr);

    return 0;
   }

 void delete(char satr[], char satr1[]){
    
    int i=0, j;
    int satr_len=strlen(satr);
    int satr1_len=strlen(satr1);

    while(i<satr_len){
          if(strstr(&satr[i],satr1)==&satr[i]){
            satr_len-=satr1_len;
            
              for(j=i; j<satr_len; j++){
                satr[j]=satr[j+satr1_len];
              }
           }
         else 
         i++;
    } 
    satr[i]='\0';
 }  