#include <stdio.h>
  int main (){
    int n; // n<27
    printf("N >>> ");
    scanf("%d",&n);

   FILE *filepointer;

   char file2name[100];

   scanf("%s",&file2name);

    filepointer =fopen(file2name, "w");
  
     for(int i=0; i<n; i++){
        for(int j=97; j<97+i; j++){
            fputc(j,filepointer);
        }
        fputs("\n",filepointer);
     }

   fclose(filepointer);

   return 0;
   }
