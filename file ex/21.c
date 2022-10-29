#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    FILE *filepointer ;
      filepointer=fopen("19ex.txt", "r");
      char string[1000]="";
      while(fgets(string, 10000, filepointer)){
         
      }

      return 0;
}