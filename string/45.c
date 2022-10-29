#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
  // 45-46 mashiqlar
  int main (){
      char userinput[100];
      char word[20];
      char lonhestword[20];
      char shortestword[20];
      int wordindex=0;

      printf("Enter the string words \n");
      fgets(userinput,sizeof(userinput),stdin);

        for(int i=0; i<strlen(userinput); i++){
        while(i<strlen(userinput) && !isspace(userinput[i]) && isalnum(userinput[i])){
            word[wordindex++]=userinput[i++];
         }
         if(wordindex!=0){
            word[wordindex]='\0';
            if(strlen(lonhestword)==0){
                strcpy(lonhestword,word);
            }

            if(strlen(shortestword)==0){
                strcpy(shortestword,word);
            }
             if(strlen(word)>strlen(lonhestword)){
            strcpy(lonhestword,word);
            }

            if(strlen(word)<strlen(shortestword)){
            strcpy(shortestword,word);
          }

           wordindex=0;
         }
      }

     printf("Eng  uzun so'z: %s\n",lonhestword);
     printf("Eng qisqa so'z: %s\n",shortestword);

      return 0;

  }