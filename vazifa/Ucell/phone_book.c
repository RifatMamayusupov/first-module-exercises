
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  
struct contact{
    char name[50];
    char address[50];
    char email[50];
    int number;       
};


   void show();
   void search();
   void create();
   void delete();
   void update();
   void exit();
   void menu();

   struct contact stt[100000];
   int num;
   FILE *filepointer;

   int main (){

    printf("\n\t\tAsssalomu alaykum.......\n");
    printf("\tAi kontakt tizimiga xush kelibsiz !\n");
    printf("\t\t==============\t\n");
    printf("\t\t=    MENU    =\t\n");
    printf("\t\t==============\t\n\n");
             
    printf("\t1.Barcha kontaklar:\t\t\t\n\t2.Nomerni qidirish:\t\t\t\n\t3.Yangi kontakt qo'shish:\t\t\t\n\t4.Kontaktlarni o'zgartirish:\t\t\t\n\t5.Kontaktni o'chirish:\t\t\t\n\t6.Kontaktlardan chiqish:\t\t\n\n");

    printf("****************************************\n\n");
    printf("MENU listidagi raqmlardan birini tanlang: ");
    scanf("%d",&num);
    // switch step boshlandi.................................
    switch (num)
    {
    case 1:
        show();
        break;
    case 2:
        search();
            break;
    case 3:
        create();
        break;
    case 4:
    // update();
        break;
    case 5:
        delete();
        break;
    case 6:
        printf("\n\nAi Kontakt tizmdan foydalinganiz uchun rahmat, sog` salomat bo`ling\n\n");
        exit(0);     
                 
    default:
        printf("\ntupoy yaxshilab o`qib keyin yoz !!!\n\n");
        main();
    }
}

    void create(){

    char ism[100];
    char manzil[100];
    char mail[100];
    int i, number;
    fflush(stdin);

    filepointer=fopen("contact.txt","a+");
    if(filepointer==NULL){
    printf("Kechirasiz tizmda xatolik bor...\n");
    printf("ILtimos qaytadan urinib ko'ring...\n");
    main();

    }else{

    printf("\n\tIsmingizni kiriting: ");
    scanf("%s",ism);
    printf("\n\tManzilingizni kiriting: ");
    scanf("%s",manzil);
    printf("\n\tEmaillingizni kiriting: ");
    scanf("%s",mail);
    printf("\n\tPhone_numberni kiriting: ");
    scanf("%d",&number);

    strcpy(stt[number].name,ism);
    strcpy(stt[number].address,manzil);
    strcpy(stt[number].email,mail);
    stt[number].number=number;

    fprintf(filepointer,"\n");
    fprintf(filepointer,"%s,",stt[number].name);
    fprintf(filepointer,"%s,",stt[number].address);
    fprintf(filepointer,"%s,",stt[number].email);
    fprintf(filepointer,"%d",stt[number].number);          

    }
    fclose(filepointer);
    menu();
}


    void menu(){
    int i;
    printf("\nSahifadan chiqish uchun [1] bosing, dasturdan chiqish uchun [0] bosing: ");
    scanf("%d",&i);
    if(i==1){
        main();
    }else if(i==0){
        printf("\nContact tizmdan foydalinganiz uchun rahmat, Sog`bo`ling!\n\n");
        exit(0);
    }else{
        return menu();
        }
        fclose(filepointer);
        menu();
    }

    void show(){
    char string[100000]="";
    
    filepointer = fopen("contact.txt", "r");
    while(fgets(string, 100000, filepointer)){

        for(int i=0; i<strlen(string); i++){

            printf("%c", string[i]);

        }
    }
    fclose(filepointer);
    menu();
}


    void search(){ 
    char string[100000];
    char num1[100];
    int tengmas=0, son;
    int num2;
    printf("\nRaqamizni kiriting: ");
    scanf("%s",num1);
    printf("\nRaqamlar sonini kiriting: ");
    scanf("%d",&son);
    
             
        filepointer=fopen("contact.txt","r");
          while(fgets(string,100000,filepointer)){
            tengmas = 0;
             if(num1[0]==string[strlen(string)-son]){
               for(int i=strlen(string)-3; i<=strlen(string); i++){
                 if(num1[son-strlen(string)-i]!=string[i]){
                   tengmas=1;                  }
              }
          }
           if(tengmas){
            printf("%s\n",string);
            break;                            
           }    
            
        }  
         fclose(filepointer);
        menu();
     }
     void delete(){
        
        char s[1000]="",hammasi[1000]="",yordamchi[1000]="";
        int index=0, num1=0, slesh_n=0;

        printf("Enter the number.");
        scanf("%d",&num1);

        filepointer=fopen("contact.txt","r");
        while(fgets(s,1000,filepointer)){
            for(int i=0; i<strlen(s);i++){
                hammasi[index++]=s[i];
            }
        } 
        fclose(filepointer);

         filepointer=fopen("contact.txt","w");
          int start=0;
          for(int i=strlen(hammasi);i>0; i--){
            if(hammasi[i]=='\n'){
                yordamchi[slesh_n++]==i;
             }
          }

          for(int i=0; i<yordamchi[slesh_n-(num1-1)]; i++){
            fputc(hammasi[i],filepointer);
          }

          for(int i=yordamchi[slesh_n-num1]; i<strlen(hammasi);i++){
            fputc(hammasi[i],filepointer);
          }

        fclose(filepointer);
            }

  
     