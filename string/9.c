#include <stdio.h>
#include <stdlib.h>
  int main (){
   char satr[]="hello",satr1[]="world";
   int length_1= sizeof(satr)/sizeof(satr[0]),lenght_2=sizeof(satr1)/sizeof(satr1[0]);
   
   char satr2[length_1+lenght_2];

    int yordamchi=0;
    for(int i=0; i<length_1+lenght_2; i++){
        if(i>length_1-2){
            yordamchi = i-(length_1-1);
            satr2[i]= satr1[yordamchi];
        }else{
            satr2[i]=satr[i];
        }
    }
      
      satr2[length_1 + lenght_2]='\0';
      printf("Natija: %s\n",satr2);

    return 0;
  }