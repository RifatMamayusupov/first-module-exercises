#include <stdio.h>
#include <string.h>
  int main (){
   
   FILE *filepointr;
   char S[100]="hello, world,sajxb,hasduhbd, qanday", hammasi[10000]="";
   int index=0;

   for(int i=0; i<strlen(S); i++){
       hammasi[index++]=S[i];
   }

   filepointr=fopen("hello2.text","r");

   while(fgets(S,100,filepointr)){
      for(int i=0; i<strlen(S);i++){
        hammasi[index++]=S[i];
      }
   }

   fclose(filepointr);

   filepointr=fopen("hello2.text","w");
   for(int i=0; i<strlen(hammasi); i++){
      fputc(hammasi[i],filepointr);
   }

    fclose(filepointr);

    return 0;

  }