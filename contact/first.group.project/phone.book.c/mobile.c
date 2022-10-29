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
    printf("\tAI kontakt tizimiga xush kelibsiz !\n");
    printf("\t\t==============\t\n");
    printf("\t\t=    MENU    =\t\n");
    printf("\t\t==============\t\n\n");
             
    printf("\t1.Barcha kontaklar:\t\t\t\n\t2.Nomerni qidirish:\t\t\t\n");
    printf("\t3.Yangi kontakt qo'shish:\t\t\t\n\t4.Kontaktlarni o'zgartirish:\t\t\t\n");
    printf("\t5.Kontaktni o'chirish:\t\t\t\n\t6.Kontaktlardan chiqish:\t\t\n\n");

    printf("****************************************\n\n");
    printf("MENU listidagi raqmlardan birini tanlang: ");
    scanf("%d",&num);
    printf("\n");
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
        update();
        break;
    case 5:
        delete();
        break;
    case 6:
        printf("\n\nAI Kontakt tizmdan foydalinganiz uchun rahmat, sog` salomat bo`ling\n\n");
        exit(0);     
                 
    default:
        printf("\nTupoy yaxshilab o`qib keyin yoz !!!\n\n");
        main();
    }
}

// ma`lumotlarni yaratish
    void create(){

    char ism[100];
    char manzil[100];
    char mail[100];
    int i, number;
    fflush(stdin);

    filepointer=fopen("counter.txt","a+");
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

    fprintf(filepointer,"%s,",stt[number].name);
    fprintf(filepointer,"%s,",stt[number].address);
    fprintf(filepointer,"%s,",stt[number].email);
    fprintf(filepointer,"%d",stt[number].number);          
    fprintf(filepointer,"\n");

    }
    fclose(filepointer);
    menu();
}
    void menu(){
    int i;
    printf("\n");
    printf("\nSahifadan chiqish uchun { 1 } bosing, dasturdan chiqish uchun { 0 } bosing: ");
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
    
    filepointer = fopen("counter.txt", "r");
    while(fgets(string, 100000, filepointer)){

        for(int i=0; i<strlen(string); i++){
            printf("%c", string[i]);

        }
    }
    fclose(filepointer);
    menu();
}

// qidiruv qismi
    void search(){ 
    char string[100000];
    char num1[100];
    int tengmas=0;
    
    printf("\nRaqamizni kiriting: ");
    scanf("%s", num1);
             
    filepointer=fopen("counter.txt","r");
    while(fgets(string, 1000, filepointer)){
        tengmas = 0;
        if(num1[0]==string[strlen(string)-4]){
            for(int i=strlen(string)-3; i<=strlen(string); i++){
                if(num1[4 - (strlen(string) - i)]==string[i]){
                    tengmas = 1;
                }
            }
        }

        if(tengmas){
            printf("\n%s\n", string);
            printf("\n");
        }
    }

    fclose(filepointer);
    menu();
}

// ma`lumotlarni o`chirish qismi
void delete(){

    char satr[10000], barcha_satr[10000]="";
    char del[100], bosh_satr[40]="";
    int tengmas=0;
    int delete;

    printf("\nOchirish kerak raqamni kiriting: ");
    scanf("%s", del);

    //printf("O'sha raqam: ");

    filepointer=fopen("counter.txt","r");
    while(fgets(satr, 1000, filepointer)){
        tengmas = 0;
        if(del[0]==satr[strlen(satr)-4]){
            for(int i=strlen(satr)-3; i<=strlen(satr); i++){
                if(del[4 - (strlen(satr) - i)]==satr[i]){
                    tengmas = 1;
                }
            }
        }
    
        if(tengmas){
            printf("\n***************************************\n");
            printf("\nO'sha raqam: %s \n", satr);
            printf("\nTabrikliman!. Raqam o'chirildi...!!!\n");
            strcpy(satr, bosh_satr);
        }
        strcat(barcha_satr, satr);
    }
    fclose(filepointer);
    
    filepointer = fopen("counter.txt", "w");
    for(int i=0; i<strlen(barcha_satr); i++){
        fprintf(filepointer, "%c", barcha_satr[i]);
    }
    fclose(filepointer);
    menu();
}







void update(){

    struct contact stt[1000];

    int tengmas=-1, counter=0, ozgartirish, counter_for_adress=0;
    int birinchi_vergul=-1, vergul1=-1, vergul2=-1, nuqta=-1;
    int birinchisi=0, ikkinchisi=0;
    char string[10000];
    char malumotlar[10000]="", name[100]="", yordamchi[1000]="";

  
    printf("\n  Hodim ismini kiriting: ");
    scanf("%s", name);

    filepointer = fopen("counter.txt", "r");
    while(fgets(string, 1000, filepointer)) {
        for(int i=0; i<strlen(string); i++){
            if(string[i]==','){
                birinchi_vergul=i;
                break;
            }
        }

        for(int i=0; i<birinchi_vergul; i++){
            tengmas=0;
            if(name[0] == string[0]&&name[1] == string[1]&&name[2] == string[2]){
                for(int j=0; j<birinchi_vergul; j++){
                    if(name[i]!=string[j]){
                        tengmas=1;
                        break;
                    }
                }
            }
        }
        if(tengmas){
            printf("\n  %s", string);
        }
    }

    fclose(filepointer);
    
    
    printf("\n\t1.Ismi");
    printf("\n\t2.Manzil");
    printf("\n\t3.Email");
    printf("\n\t4.Raqam");

    printf("\n\n\tIltimos, variantni tanlang :  ");
    scanf("%d", &ozgartirish);

    switch (ozgartirish)
    {
    case 1: 

    filepointer = fopen("counter.txt", "r+");
    while(fgets(string, 1000, filepointer)) {
        for(int i=0; i<strlen(string); i++){
            if(string[i]==','){
                birinchi_vergul=i;
                break;
            }
        }

        for(int i=0; i<birinchi_vergul; i++){
            tengmas=0;
            if(name[0] == string[0]&&name[1] == string[1]&&name[2] == string[2]){
                for(int j=0; j<birinchi_vergul; j++){
                    if(name[i]!=string[j]){
                        tengmas=1;
                        break;
                    }
                }
            }
        }

        if(tengmas){
            for(int i=0; i<strlen(string); i++){
            if(string[i]==',' && !birinchisi){
                birinchisi = 1;
                continue;
           }
            

            if(vergul1==-1 && string[i]==',' && birinchisi){
                vergul1 = i;
            } else if(vergul2==-1 && string[i]==',' && birinchisi){
                    vergul2 = i;
                    break;
                }
        }

            printf("Eski isim: ");
            for(int i=vergul1+1; i<vergul2+1; i++){
                printf("%c", string[i]);
            }


            printf("\nYangi isim kiriting: ");
            scanf("%s", stt->name);


            counter = 0;
            for(int i=0; i<vergul1+1; i++){
                yordamchi[counter++] = string[i];
            }

            // counter_for_lavozimi = 0;
            // for(int i=0; i<vergul1-1; i++){
            //     yordamchi[counter++] = stt->name[counter_for_lavozimi++];
            // }

            for(int i=vergul2; i<strlen(string); i++){
                yordamchi[counter++] = string[i];
            }
        }

        if(strlen(yordamchi)!=0){
            strcat(malumotlar, yordamchi);
            strcpy(yordamchi, "");
        } else {
            strcat(malumotlar, string);
        }
    }
    fclose(filepointer);

    filepointer = fopen("counter.txt", "w");
    for(int i=0; i<strlen(malumotlar); i++){
        fprintf(filepointer, "%c", malumotlar[i]);
    }
    fclose(filepointer);
        break;                
    case 2: 

        filepointer = fopen("counter.txt", "r+");
        // birinchi vergulni topish
        while(fgets(string, 1000, filepointer)) {
            for(int i=0; i<strlen(string); i++){
                if(string[i]==','){
                    birinchi_vergul=i;
                    break;
                }
            }

            // kereakli ismni aniqlash
            for(int i=0; i<birinchi_vergul; i++){
                tengmas=0;
                if(name[0] == string[0]&&name[1] == string[1]&&name[2] == string[2]){
                    for(int j=0; j<birinchi_vergul; j++){
                        if(name[i]!=string[j]){
                            tengmas=1;
                            break;
                        }
                    }
                }
            }

            if(tengmas){
                // ikkinchi vergulni topish
                for(int i=birinchi_vergul+1; i<strlen(string); i++){
                    if(vergul2==-1 && string[i]==','){
                        vergul2 = i;
                        break;
                    }
                }

                printf("Eski manzil: ");
                for(int i=birinchi_vergul+1; i<vergul2; i++){
                    printf("%c", string[i]);
                }
                printf("\n");

                printf("Yangi manzilni kiriting: ");
                scanf("%s", stt->address);
                counter = 0;
                for (int i = 0; i < birinchi_vergul + 1; i++)
                {
                    yordamchi[counter++] = string[i];
                }

                counter_for_adress = 0;
                for (int i = birinchi_vergul; i < birinchi_vergul+strlen(stt->address); i++)
                {
                    yordamchi[counter++] = stt->address[counter_for_adress++];
                }

                for (int i = vergul2; i < strlen(string); i++)
                {
                    yordamchi[counter++] = string[i];
                }
            }

            if (strlen(yordamchi) != 0)
            {
                strcat(malumotlar, yordamchi);
                strcpy(yordamchi, "");
            }
            else
            {
                strcat(malumotlar, string);
            }
        }
        fclose(filepointer);

        filepointer = fopen("counter.txt", "w");
        for(int i=0; i<strlen(malumotlar); i++){
            fprintf(filepointer, "%c", malumotlar[i]);
        }
        fclose(filepointer);

        break;

    case 3: 
        printf("Yangi email kiriting: ");
        scanf("%s", stt->email);
        break;

    case 4:
        printf("Yangi raqam kiriting: ");
        scanf("%d", &stt->number);
        break;

    default:
        printf("Bunday variant yo'q!");
    }


    
    int tanlov;
    printf("\n\t\t1.Asosiy menyuga qaytish");
    printf("\n\t\t2.Ma'lumotlarni o'zgartirish bo'limga qaytish");
    printf("\n\t\t3.Chiqish");

    printf("\n\t\tIltimos variantni tanlang: ");
    scanf("%d", &tanlov);
    printf("\n");

    switch (tanlov)
    {
        case 1:
            main();
            break;
        case 2:
            update();
            break;
        case 3: 
            printf("\n\t\t\tXayr, salomat bo'ling!)\n\n");
            exit(0);
        default:
            printf("bunday variant yo'q!!!");                          
    }

    menu();
}
