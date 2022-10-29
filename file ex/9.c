#include <stdio.h>
#include <string.h>
  int main (){
    int k;
    printf("K >>>");
    scanf("%d",&k);

    FILE *filepointer;
    char satr[100]="", hammasi[10000]="";
    int index=0, counter=0;

    filepointer= fopen("Hi1.text","r");
      while(fgets(satr,100, filepointer)){
        for(int i=0; i<strlen(satr); i++){
            hammasi[index++]=satr[i];//o'zlashtirdi
        }
      }
     
      fclose(filepointer);

      filepointer=fopen("Hi1.text","w");
       for(int i=0; i<strlen(hammasi);i++){
           if(hammasi[i]==10 && counter !=-1){
              counter++;
           }
           if(counter==k){
              fputs("\n",filepointer);
              counter=-1;
           }

           fputc(hammasi[i],filepointer);
       }

       fclose(filepointer);
      
      return 0;
  }