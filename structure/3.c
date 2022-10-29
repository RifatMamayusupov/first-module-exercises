
#include <stdio.h>
#include <stdlib.h>
   
  struct computer{
   char nomi;
   char markasi;
   int xotirasi;
   int apirativka;
  };

  int main (){
    struct computer computers[2];
  int i;
    for (int i=1; i<2; i++){

        printf("Enter the name of computer... ");
        scanf("%s", &computers[i].nomi);

        printf("Enter the markasi of computer... ");
        scanf("%s", &computers[i].markasi);

        printf("Enter the xotirasi of computer... ");
        scanf("%d",&computers[i].xotirasi);

        printf("Enter the apirativka of computer... ");
        scanf("%d", &computers[i].apirativka);

        printf("\n+++++++++++++++++++++++++++++++++++++++++\n\n");





    }

        printf("%s",computers[i].nomi);
        printf("%s",computers[i].markasi);
        printf("%d",computers[i].xotirasi);
        printf("%d",computers[i].apirativka);

       printf("\n+++++++++++++++++++++++++++++++++++++++++\n\n");

       return 0;



  }