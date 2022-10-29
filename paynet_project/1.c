#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// paynet project

struct paynet
{
    char code[100];
    char number[100];
    char money[100];
    char login[100];
    char name[100];
    char familiya[100];
    char vaqt[100];
};

void Telefone();
void show();
void Komunal_tolov();
void Internet_tarmogi();
void Kredit_tolov();
void exit();
void menu();

struct paynet satr[100000];
int num;
FILE *filepointer;
// FILE *komunal_file;

int main()
{

    time_t now;
    time(&now);
    printf("\n");
    printf(" \t\t \t\t  %s   ", ctime(&now));

    printf("\n\t\t\t\t\t\t\t\t\t\tAssalomu alaykum !\t\n");
    printf("\n\t\t\t\t\t\t\t\t\tXush kelibsiz bizning Paynet dasturimizga...!\t\n\n");

    printf("\t================\t\t\t=================\t\t\t==================\t\t\t================\t\t\t===============\n");
    printf("\t=  Tel_number  =\t\t\t= Kamunal_tolov =\t\t\t= Internet_tolov =\t\t\t= Kredit_tolov =\t\t\t=  For_finish =\n");
    printf("\t=  click: 1.   =\t\t\t=   click: 2.   =\t\t\t=    click: 3.   =\t\t\t=   click: 4.  =\t\t\t=   click: 5. =\n");
    printf("\t================\t\t\t=================\t\t\t==================\t\t\t================\t\t\t===============\n");

    printf("\n\t\t\tIltimos ko'rsatilgan variantlarni tanlang va o'z to'lovingizni amalga oshiring.\n\n");

    scanf("%d", &num);
    switch (num)
    {
    case 1:
        Telefone();
        break;
    case 2:
        Komunal_tolov();
        break;
    case 3:
        Internet_tarmogi();
        break;
    case 4:
        Kredit_tolov();
        break;
    case 5:

        printf("Paynet dasturidan foydalanganingizdan biz xursandmiz...\n");
        printf("\t\tXayir, salomat boling !\n");
        exit(0);
        break;

    default:
        printf("Kechirasiz boshqa to'lov turi qabul qilinmagan !\n");
        menu();
        break;
    }
}

void menu()
{
    int num1;
    printf("Paynet dasturini davom ettirish uchun [1] bosing, tugatish uchun [0].\n");
    scanf("%d", &num1);
    if (num1 == 1)
    {
        main();
    }
    else if (num1 == 0)
    {
        printf("Paynet dasturidan foydalanganingizdan biz xursandmiz...\n");
        printf("\t\tXayir, sog' boling !\n");
        exit(0);
    }
    else
    {
        return menu();
    }
}

void Telefone()
{
    int code;
    char string[100000];
    char nomeri[100];
    char pul[50];
    int tanlash;
    printf("\n\n\t\tMamalakat kodini tanlang..!");
    printf("\t\t\t\t Barcha to'lovlarni va nomerlarni ko'rish.\n\n");
    printf("************\t\t\t\t\t************\t\t\t\t\t************\n");
    printf("*  [UZB]   *\t\t\t\t\t*   [USA]  *\t\t\t\t\t*  Iltimos *\n");
    printf("* click: 1.*\t\t\t\t\t* click: 2.*\t\t\t\t\t* click: 3.*\n");
    printf("************\t\t\t\t\t************\t\t\t\t\t************\n");
    filepointer = fopen("paynet.txt", "a+");
    scanf("%d", &code);
    switch (code)
    {
    case 1:

        if (filepointer == NULL)
        {
            printf("Kechirasiz tizmda xatolik bor.\n");
            printf("Qaytadan urinib ko'ring.\n");
        }
        else
        {
            printf("Telnomerni kodi bilan kiriting.");
            scanf("%s", nomeri);
            printf("Summani kiriting.");
            scanf("%s", pul);
            printf("Iltimos tanlang !\n");
            printf("Plastik karta orqali: {1}  naqt pul orqali: {2} \n");
            scanf("%d", &tanlash);

            switch (tanlash)
            {
            case 1:
                printf("Plastik karta orqali sizning to'lovingiz muofiqiyatli amalga oshirildi.\n\n");
                break;
            case 2:
                printf("Naqt pul orqali sizning to'lovingiz muofiqiyatli amalga oshirildi.\n\n");
                break;

            default:
                printf("Mavjud bo'lmagan raqm bosildi..!\n");
                break;
            }
        }
        strcpy(satr[100].number, nomeri);
        strcpy(satr[100].money, pul);

        fprintf(filepointer, "Siz to'lov qilgan tel num: +998 %s,", satr[100].number);
        fprintf(filepointer, "%s\n", satr[100].money);

        break;
    case 2:
        if (filepointer == NULL)
        {
            printf("Kechirasiz tizmda xatolik bor.\n");
            printf("Qaytadan urinib ko'ring.\n");
        }
        else
        {
            printf("Telnomerni kodi bilan kiriting.");
            scanf("%s", nomeri);
            printf("Summani kiriting.");
            scanf("%s", pul);
            printf("Iltimos tanlang !\n");
            printf("Plastik karta orqali: {1}  naqt pul orqali: {2} \n");
            scanf("%d", &tanlash);

            switch (tanlash)
            {
            case 1:
                printf("Plastik karta orqali sizning to'lovingiz muofiqiyatli amalga oshirildi.\n\n");
                break;
            case 2:
                printf("Naqt pul orqali sizning to'lovingiz muofiqiyatli amalga oshirildi.\n\n");
                break;
            }
        }
        strcpy(satr[100].number, nomeri);
        strcpy(satr[100].money, pul);

        fprintf(filepointer, "Siz to'lov qilgan tel num: +1%s,", satr[100].number);
        fprintf(filepointer, "%s\n", satr[100].money);

        break;
    case 3:
        while (fgets(string, 100000, filepointer))
        {
            for (int i = 0; i < strlen(string); i++)
            {
                printf("%c", string[i]);
            }
        }
        printf("\n");
        break;

    default:
        printf("\n\n\tMavjud bo'lmagan mamlakat kodini tanladingiz.");
        return Telefone();
        break;
    }
    fclose(filepointer);
    menu();
}

void Komunal_tolov()
{
    char string[1000000]="";
    int vergul1 = -1, vergul2 = -1, birinchisi = 0, tengmas = 0;
    char satr1[100];
    char num2[100];
    int numberbek;
    char kvitansiya_code[100];
    char sitr_raqami[100];
    char pul_miqdori[100];
    int tanlamoq;
    int tanlash, search_tanlash;
    int show_tanlov;

    printf("\nKomunal To'lovlar dasturiga xush kelibsiz..!\n\n");
    printf("Variantni tanlang.\n\n");

    printf("*************\t\t\t*************\t\t\t*************\t\t\t*************\t\t\t*************\n");
    printf("*   GAS     *\t\t\t*    SUV    *\t\t\t* ELEKTER_E *\t\t\t*  SHOW_ALL *\t\t\t* Search_one*\n");
    printf("* click: 1. *\t\t\t* click: 2. *\t\t\t* click: 3. *\t\t\t* click: 4. *\t\t\t* click: 5. *\n");
    printf("*************\t\t\t*************\t\t\t*************\t\t\t*************\t\t\t*************\n");
    scanf("%d", &tanlamoq);
    filepointer = fopen("komunal_tolov.txt", "a+");
    switch (tanlamoq)
    {
    case 1:
        filepointer = fopen("GAZ.txt", "a+");
        printf("Iltimos kvitansiya kodini kiriting: ");
        scanf("%s", kvitansiya_code);
        printf("Kvitansiya raqamini kiriting: ");
        scanf("%s", sitr_raqami);
        printf("Summani kriting: ");
        scanf("%s", pul_miqdori);
        printf("Iltimos tanlang !\n");
        printf("\nPlastik karta orqali: {1}  naqt pul orqali: {2} \n");
        scanf("%d", &tanlash);

        switch (tanlash)
        {
        case 1:
            printf("Plastik karta orqali sizning to'lovingiz muofiqiyatli amalga oshirildi.\n\n");
            break;
        case 2:
            printf("Naqt pul orqali sizning to'lovingiz muofiqiyatli amalga oshirildi.\n\n");
            break;
        default:
            printf("Natog'ri raqam bosildi, ammo to'lov a,alga oshdi.\n\n");
            break;
        }

        strcpy(satr[100].code, kvitansiya_code);
        strcpy(satr[100].number, sitr_raqami);
        strcpy(satr[100].money, pul_miqdori);

        fprintf(filepointer, "Data: %s,", satr[100].code);
        fprintf(filepointer, "%s,", satr[100].number);
        fprintf(filepointer, "%s\n", satr[100].money);
        fclose(filepointer);

        break;
    case 2:
        filepointer = fopen("SUV.txt", "a+");
        printf("Iltimos kvitansiya kodini kiriting: ");
        scanf("%s", kvitansiya_code);
        printf("Kvitansiya raqamini kiriting: ");
        scanf("%s", sitr_raqami);
        printf("Summani kriting: ");
        scanf("%s", pul_miqdori);
        printf("Iltimos tanlang !\n");
        printf("\nPlastik karta orqali: {1}  naqt pul orqali: {2} \n");
        scanf("%d", &tanlash);

        switch (tanlash)
        {
        case 1:
            printf("Plastik karta orqali sizning to'lovingiz muofiqiyatli amalga oshirildi.\n\n");
            break;
        case 2:
            printf("Naqt pul orqali sizning to'lovingiz muofiqiyatli amalga oshirildi.\n\n");
            break;
        default:
            printf("Natog'ri raqam bosildi, ammo to'lov amalga oshdi.\n\n");
            break;
        }

        strcpy(satr[100].code, kvitansiya_code);
        strcpy(satr[100].number, sitr_raqami);
        strcpy(satr[100].money, pul_miqdori);

        fprintf(filepointer, "Data: %s,", satr[100].code);
        fprintf(filepointer, "%s,", satr[100].number);
        fprintf(filepointer, "%s\n", satr[100].money);
        fclose(filepointer);
        break;
    case 3:
        filepointer = fopen("ELEKTER.E.txt", "a+");
        printf("Iltimos kvitansiya kodini kiriting: ");
        scanf("%s", kvitansiya_code);
        printf("Kvitansiya raqamini kiriting: ");
        scanf("%s", sitr_raqami);
        printf("Summani kriting: ");
        scanf("%s", pul_miqdori);
        printf("Iltimos tanlang !\n");
        printf("\nPlastik karta orqali: {1}  naqt pul orqali: {2} \n");
        scanf("%d", &tanlash);

        switch (tanlash)
        {
        case 1:
            printf("Plastik karta orqali sizning to'lovingiz muofiqiyatli amalga oshirildi.\n\n");
            break;
        case 2:
            printf("Naqt pul orqali sizning to'lovingiz muofiqiyatli amalga oshirildi.\n\n");
            break;
        default:
            printf("Natog'ri raqam bosildi,ammo to'lov amalga oshdi.\n\n");
            break;
        }

        strcpy(satr[100].code, kvitansiya_code);
        strcpy(satr[100].number, sitr_raqami);
        strcpy(satr[100].money, pul_miqdori);

        fprintf(filepointer, "Data: %s,", satr[100].code);
        fprintf(filepointer, "%s,", satr[100].number);
        fprintf(filepointer, "%s\n", satr[100].money);
        fclose(filepointer);
        break;
    case 4:
        printf("Variantni tanlang..!\n\n");
        printf("AGAR: \n");
        printf("GAZ: [1] \t\t\t\t SUV: [2]\t\t\t\t ELEKTER_E: [3]\n\n");
        scanf("%d", &show_tanlov);
        switch (show_tanlov)
        {
        case 1:
            filepointer = fopen("GAZ.txt", "r");
            while (fgets(string, 10000, filepointer))
            {
                for (int i = 0; i < strlen(string); i++)
                {
                    printf("%c", string[i]);
                }
            }
            fclose(filepointer);

            break;
        case 2:
            filepointer = fopen("SUV.txt", "r");
            while (fgets(string, 10000, filepointer))
            {
                for (int i = 0; i < strlen(string); i++)
                {
                    printf("%c", string[i]);
                }
            }
            fclose(filepointer);

            break;
        case 3:
            filepointer = fopen("ELEKTER.E.txt", "r");
            while (fgets(string, 10000, filepointer))
            {
                for (int i = 0; i < strlen(string); i++)
                {
                    printf("%c", string[i]);
                }
            }
            fclose(filepointer);

            break;
        default:
            printf("Yertarlicha ma'lumot mavjud emas....\n\n");
            break;
        }

        break;

    case 5:
        num2[1000];
        vergul1 = 0;
        vergul2 = 0;
        tengmas = 0;
        birinchisi = 0;

        printf("Qaysi option bo'yicha qidirmoqchisiz ?\n");
        printf("Iltimos tanlang >>>.\n\n");
        printf("\t\tGAZ: {1} \t\t\tSUV: {2} \t\t\tELEKTER.E {3}\n\n");
        scanf("%d", &search_tanlash);
        switch (search_tanlash)
        {
        case 1:
            filepointer = fopen("GAZ.txt", "r+");

            printf("Kvitansiya bo'yicha raqamni kiriting...\n\n");
            scanf("%s", num2);

            while (fgets(string, 1000, filepointer))
            {
                // strcpy(num2,"");
                for (int i = 0; i < strlen(string); i++)
                {
                    if (string[i] == ',' && !birinchisi)
                    {
                        birinchisi = 1;
                        continue;
                    }
                }
                // ishlayopti buyergacha printf("%d",birinchisi);

                for (int i = 0; i < strlen(string); i++)
                {
                    if (vergul1 = -1 && string[i] == ',' && birinchisi)
                    {
                        vergul1 = i; // 8
                        break;
                    }
                }
                for (int i = vergul1 + 1; i < strlen(string); i++)
                {
                    if (vergul2 = -1 && string[i] == ',' && birinchisi)
                    {
                        vergul2 = i; // 16
                        break;
                    }
                }
                // printf("%d",vergul1);
                // vergul bir va vergul ikki ishladi;

                for (int i = vergul1 + 1; i < vergul2; i++)
                {
                    if (num2[0] == string[vergul1 + 1])
                    {
                        if (num2[1] == string[vergul1 + 2] && num2[2] == string[vergul1 + 3])
                        {
                            tengmas = 1;
                        }
                    }
                }

                if (tengmas)
                {
                    for (int i = 0; i < strlen(string); i++)
                    {
                        printf("%c", string[i]);
                    }
                    break;
                }
            }
            printf("\n");

            fclose(filepointer);
            break;
        case 2:

            filepointer = fopen("SUV.txt", "r+");

            printf("Kvitansiya bo'yicha raqamni kiriting...\n\n");
            scanf("%s", num2);

            while (fgets(string, 1000, filepointer))
            {
                // strcpy(num2,"");
                for (int i = 0; i < strlen(string); i++)
                {
                    if (string[i] == ',' && !birinchisi)
                    {
                        birinchisi = 1;
                        continue;
                    }
                }
                // ishlayopti buyergacha printf("%d",birinchisi);

                for (int i = 0; i < strlen(string); i++)
                {
                    if (vergul1 = -1 && string[i] == ',' && birinchisi)
                    {
                        vergul1 = i; // 8
                        break;
                    }
                }
                for (int i = vergul1 + 1; i < strlen(string); i++)
                {
                    if (vergul2 = -1 && string[i] == ',' && birinchisi)
                    {
                        vergul2 = i; // 16
                        break;
                    }
                }
                // printf("%d",vergul1);
                // vergul bir va vergul ikki ishladi;

                for (int i = vergul1 + 1; i < vergul2; i++)
                {
                    if (num2[0] == string[vergul1 + 1])
                    {
                        if (num2[1] == string[vergul1 + 2] && num2[2] == string[vergul1 + 3])
                        {
                            tengmas = 1;
                        }
                    }
                }

                if (tengmas)
                {
                    for (int i = 0; i < strlen(string); i++)
                    {
                        printf("%c", string[i]);
                    }
                    break;
                }
            }
            printf("\n");

            fclose(filepointer);

            break;
        case 3:

            filepointer = fopen("ELEKTER.E.txt", "r+");

            printf("Kvitansiya bo'yicha raqamni kiriting...\n\n");
            scanf("%s", num2);

            while (fgets(string, 1000, filepointer))
            {
                // strcpy(num2,"");
                for (int i = 0; i < strlen(string); i++)
                {
                    if (string[i] == ',' && !birinchisi)
                    {
                        birinchisi = 1;
                        continue;
                    }
                }
                // ishlayopti buyergacha printf("%d",birinchisi);

                for (int i = 0; i < strlen(string); i++)
                {
                    if (vergul1 = -1 && string[i] == ',' && birinchisi)
                    {
                        vergul1 = i; // 8
                        break;
                    }
                }
                for (int i = vergul1 + 1; i < strlen(string); i++)
                {
                    if (vergul2 = -1 && string[i] == ',' && birinchisi)
                    {
                        vergul2 = i; // 16
                        break;
                    }
                }
                // printf("%d",vergul1);
                // vergul bir va vergul ikki ishladi;

                for (int i = vergul1 + 1; i < vergul2; i++)
                {
                    if (num2[0] == string[vergul1 + 1])
                    {
                        if (num2[1] == string[vergul1 + 2] && num2[2] == string[vergul1 + 3])
                        {
                            tengmas = 1;
                        }
                    }
                }

                if (tengmas)
                {
                    for (int i = 0; i < strlen(string); i++)
                    {
                        printf("%c", string[i]);
                    }
                    break;
                }
            }
            printf("\n");

            fclose(filepointer);
            break;

        default:
            printf("Qidirish uchun yetarli ma'lumot yoq\n\n");
            break;
        }

        break;

    default:
        printf("Kechirasiz boshqa to'lov turi qabul qilinmagan !\n");
        break;
    }
    fclose(filepointer);
    menu();
}
void Internet_tarmogi()
{
    char string[100000], qidirish[100], bosh_satr[100], space[10000];
    int vergul1 = -1, tengmas1 = 0, birinchisi = 0;
    char ism[20], login1[20];
    char telefone[100], pulmiqdori[50];
    int num3, delete, tanlash, delete1;
    filepointer = fopen("Internet_paket.txt", "a+");
    printf("          Internet paketlar xizmatiga xush kelibsiz..!\n\n");
    printf("          Iltimos Telekomni tanlang: \n\n");
    printf("\t\t\t\t\t************\t\t\t*************\t\t\t*************\t\t\t*************\n");
    printf("\t\t\t\t\t* Turon_Te *\t\t\t* Sarkon_Te *\t\t\t* Uztelekom *\t\t\t*  Delete   *\n");
    printf("\t\t\t\t\t* click: 1.*\t\t\t* click: 2. *\t\t\t* click: 3. *\t\t\t* click: 4. *\n");
    printf("\t\t\t\t\t************\t\t\t*************\t\t\t*************\t\t\t*************\n");
    scanf("%d", &num3);
    switch (num3)
    {
    case 1:
        filepointer = fopen("Turon.txt", "a+");
        printf("\n\t\t\tWelcome Turon telekom..!\n\n");
        printf("Ismingizni kiriting. ");
        scanf("%s", ism);
        printf("Telefon raqamni kiriting. ");
        scanf("%s", telefone);
        printf("Internet loginni kiriting. ");
        scanf("%s", login1);
        printf("Pul miqdorini kiriting. ");
        scanf("%s", pulmiqdori);
        printf("Iltimos tanlang !\n");
        printf("\nPlastik karta orqali: {1}  naqt pul orqali: {2} \n");
        scanf("%d", &tanlash);

        switch (tanlash)
        {
        case 1:
            printf("Plastik karta orqali sizning to'lovingiz muofiqiyatli amalga oshirildi.\n\n");
            break;
        case 2:
            printf("Naqt pul orqali sizning to'lovingiz muofiqiyatli amalga oshirildi.\n\n");
            break;
        default:
            printf("Natog'ri raqam bosildi, ammo to'lov a,alga oshdi.\n\n");
            break;
        }

        strcpy(satr[100].name, ism);
        strcpy(satr[100].number, telefone);
        strcpy(satr[100].login, login1);
        strcpy(satr[100].money, pulmiqdori);

        fprintf(filepointer, "%s,", satr[100].name);
        fprintf(filepointer, "%s,", satr[100].number);
        fprintf(filepointer, "%s,", satr[100].login);
        fprintf(filepointer, "%s\n\n", satr[100].money);

        fclose(filepointer);

        break;
    case 2:
        printf("\n\t\t\tWelcome Sarkon telekom..!\n");

        filepointer = fopen("Sarkon.txt", "a+");

        printf("Ismingizni kiriting. ");
        scanf("%s", ism);
        printf("Telefon raqamni kiriting. ");
        scanf("%s", telefone);
        printf("Internet loginni kiriting. ");
        scanf("%s", login1);
        printf("Pul miqdorini kiriting. ");
        scanf("%s", pulmiqdori);
        printf("Iltimos tanlang !\n");
        printf("\nPlastik karta orqali: {1}  naqt pul orqali: {2} \n");
        scanf("%d", &tanlash);

        switch (tanlash)
        {
        case 1:
            printf("Plastik karta orqali sizning to'lovingiz muofiqiyatli amalga oshirildi.\n\n");
            break;
        case 2:
            printf("Naqt pul orqali sizning to'lovingiz muofiqiyatli amalga oshirildi.\n\n");
            break;
        default:
            printf("Natog'ri raqam bosildi, ammo to'lov a,alga oshdi.\n\n");
            break;
        }

        strcpy(satr[100].name, ism);
        strcpy(satr[100].number, telefone);
        strcpy(satr[100].login, login1);
        strcpy(satr[100].money, pulmiqdori);

        fprintf(filepointer, "%s,", satr[100].name);
        fprintf(filepointer, "%s,", satr[100].number);
        fprintf(filepointer, "%s,", satr[100].login);
        fprintf(filepointer, "%s\n", satr[100].money);

        fclose(filepointer);
        break;
    case 3:
        printf("\n\t\t\tWelcome Uztelekom..!\n");
        filepointer = fopen("Uztelom.txt", "a+");

        printf("Ismingizni kiriting. ");
        scanf("%s", ism);
        printf("Telefon raqamni kiriting. ");
        scanf("%s", telefone);
        printf("Internet loginni kiriting. ");
        scanf("%s", login1);
        printf("Pul miqdorini kiriting. ");
        scanf("%s", pulmiqdori);
        printf("Iltimos tanlang !\n");
        printf("\nPlastik karta orqali: {1}  naqt pul orqali: {2} \n");
        scanf("%d", &tanlash);

        switch (tanlash)
        {
        case 1:
            printf("Plastik karta orqali sizning to'lovingiz muofiqiyatli amalga oshirildi.\n\n");
            break;
        case 2:
            printf("Naqt pul orqali sizning to'lovingiz muofiqiyatli amalga oshirildi.\n\n");
            break;
        default:
            printf("Natog'ri raqam bosildi, ammo to'lov a,alga oshdi.\n\n");
            break;
        }

        strcpy(satr[100].name, ism);
        strcpy(satr[100].number, telefone);
        strcpy(satr[100].login, login1);
        strcpy(satr[100].money, pulmiqdori);

        fprintf(filepointer, "%s,", satr[100].name);
        fprintf(filepointer, "%s,", satr[100].number);
        fprintf(filepointer, "%s,", satr[100].login);
        fprintf(filepointer, "%s\n", satr[100].money);

        fclose(filepointer);
        break;
    case 4:
        printf("Iltimos, Variantni tanlang: \n\n");
        printf("Turon: [1]           Sarkon: [2]            Uztelekom: [3] \n\n");
        scanf("%d", &delete);
        switch (delete)
        {
        case 1:

            vergul1 = -1;
            qidirish[100];
            space[10000];
            tengmas1 = -1;
            birinchisi = 0;
            delete1;
            bosh_satr[100];

            filepointer = fopen("Turon.txt", "r+");

            printf("Ro'yxatdan o'chirish uchun ismni kiriting. ");

            scanf("%s", qidirish);

            while (fgets(string, 10000, filepointer))
            {
                for (int i = 0; i < strlen(string); i++)
                {
                    if (string[i] == ',' && !birinchisi)
                    {
                        birinchisi = i;
                        break;
                    }
                }
                //   ishlayopti printf(" soni :%d",birinchisi);

                for (int i = 0; i < birinchisi; i++)
                {
                    tengmas1 = 0;
                    if (qidirish[0] == string[0] && qidirish[1] == string[1] && qidirish[2] == string[2])
                    {
                        for (int j = 0; j < birinchisi; j++)
                        {
                            if (qidirish[i] != string[j])
                            {
                                tengmas1 = 1;
                                break;
                            }
                        }
                    }
                }
                //  kiritilgan ism bilan taqqoslash

                if (tengmas1)
                {
                    strcpy(string, bosh_satr);
                    printf("\nTabriklaymiz, O'chirish muoffiqiyatli yakunlandi.\n\n");
                }
                else
                {
                    printf("\nMavjud bo'lmagan ism kiritildi\n\n");
                }
                strcat(space, string);
            }
            printf("\n");
            fclose(filepointer);

            filepointer = fopen("Turon.txt", "w");
            for (int i = 0; i < strlen(space); i++)
            {
                fprintf(filepointer, "%c", space[i]);
            }
            fclose(filepointer);

            break;
        case 2:
            vergul1 = -1;
            qidirish[100];
            space[10000];
            tengmas1 = -1;
            birinchisi = 0;
            delete1;
            bosh_satr[100];

            filepointer = fopen("Sarkon.txt", "r+");

            printf("Ro'yxatdan o'chirish uchun ismni kiriting. ");

            scanf("%s", qidirish);

            while (fgets(string, 10000, filepointer))
            {
                for (int i = 0; i < strlen(string); i++)
                {
                    if (string[i] == ',' && !birinchisi)
                    {
                        birinchisi = i;
                        break;
                    }
                }
                //   ishlayopti printf(" soni :%d",birinchisi);

                for (int i = 0; i < birinchisi; i++)
                {
                    tengmas1 = 0;
                    if (qidirish[0] == string[0] && qidirish[1] == string[1] && qidirish[2] == string[2])
                    {
                        for (int j = 0; j < birinchisi; j++)
                        {
                            if (qidirish[i] != string[j])
                            {
                                tengmas1 = 1;
                                break;
                            }
                        }
                    }
                }
                //  kiritilgan ism bilan taqqoslash

                if (tengmas1)
                {
                    strcpy(string, bosh_satr);
                    printf("\nTabriklaymiz, O'chirish muoffiqiyatli yakunlandi.\n\n");
                }
                else
                {
                    printf("\nMavjud bo'lmagan ism kiritildi.\n\n");
                }
                strcat(space, string);
            }
            printf("\n");
            fclose(filepointer);

            filepointer = fopen("Sarkon.txt", "w");
            for (int i = 0; i < strlen(space); i++)
            {
                fprintf(filepointer, "%c", space[i]);
            }
            fclose(filepointer);
            break;
        case 3:
            vergul1 = -1;
            qidirish[100];
            space[10000];
            tengmas1 = -1;
            birinchisi = 0;
            delete1;
            bosh_satr[100];

            filepointer = fopen("Uztelom.txt", "r+");

            printf("Ro'yxatdan o'chirish uchun ismni kiriting. ");

            scanf("%s", qidirish);

            while (fgets(string, 10000, filepointer))
            {
                for (int i = 0; i < strlen(string); i++)
                {
                    if (string[i] == ',' && !birinchisi)
                    {
                        birinchisi = i;
                        break;
                    }
                }
                //   ishlayopti printf(" soni :%d",birinchisi);

                for (int i = 0; i < birinchisi; i++)
                {
                    tengmas1 = 0;
                    if (qidirish[0] == string[0] && qidirish[1] == string[1] && qidirish[2] == string[2])
                    {
                        for (int j = 0; j < birinchisi; j++)
                        {
                            if (qidirish[i] != string[j])
                            {
                                tengmas1 = 1;
                                break;
                            }
                        }
                    }
                }
                //  kiritilgan ism bilan taqqoslash

                if (tengmas1)
                {
                    strcpy(string, bosh_satr);
                    printf("\nTabriklaymiz, O'chirish muoffiqiyatli yakunlandi.\n\n");
                }
                else
                {
                    printf("\nMavjud bo'lmagan ism kiritildi.\n\n");
                }
                strcat(space, string);
            }
            printf("\n");
            fclose(filepointer);

            filepointer = fopen("Uztelom.txt", "w");
            for (int i = 0; i < strlen(space); i++)
            {
                fprintf(filepointer, "%c", space[i]);
            }
            fclose(filepointer);
            break;
        default:
            printf("Boshqa variant mavjud emas.\n");
            break;
        }
        break;
    default:
        printf("Kechirasiz, boshqa telekomlar hali qo'shilmagan.\n");
        break;
    }
    fclose(filepointer);
    menu();
}
void Kredit_tolov()
{
    FILE *filepointer;

    int tanlov, tanlov2, tanlash2, tanlov4;
    char ism[100], familiy[100], summa[100], kredit_raqam[100], time[100], string4[1000000];
    printf("\t\t\t\t\tXush kelibsiz << Kridetlar bo'limiga >> \n\n");
    printf("\t\t\tIltimos, bankni  tanlang ! \t\t\t\t\t\t\t  Ma'lumotlar bazasi uchun ! \n\n");

    printf("\t*************\t\t\t\t**************\t\t\t\t****************\t\t\t\t***************\n");
    printf("\t*  AGROBANK *\t\t\t\t*  XALQ_BANK *\t\t\t\t* IPATEKA_BANK *\t\t\t\t* Ma'lumotlar *\n");
    printf("\t*  click: 1.*\t\t\t\t*  click: 2. *\t\t\t\t*   click: 3.  *\t\t\t\t*  click: 4.  *\n");
    printf("\t*************\t\t\t\t**************\t\t\t\t****************\t\t\t\t***************\n");

    scanf("%d", &tanlov);
    switch (tanlov)
    {
    case 1:
        printf("Siz AGRO_BANK bo'limidasiz.\n");
        printf("Iltimos, variantni tanlang.\n\n");
        printf("\t\t\t*************\t\t\t\t*************\n");
        printf("\t\t\t*  To'lov   *\t\t\t\t*  Qolgani  *\n");
        printf("\t\t\t* click: 1. *\t\t\t\t* click: 2. *\n");
        printf("\t\t\t*************\t\t\t\t*************\n");

        scanf("%d", &tanlov2);
        switch (tanlov2)
        {
        case 1:
            filepointer = fopen("Agro_bank.txt", "a+");

            printf("Ismingizni kiriting. ");
            scanf("%s", ism);
            printf("Familiyangizni kiriting. ");
            scanf("%s", familiy);
            printf("Kredit_raqamingizni kiriting. ");
            scanf("%s", kredit_raqam);
            printf("Summani kiriting. ");
            scanf("%s", summa);
            printf("Sanani kiriting. ex: (10.12.2022) ");
            printf("Iltimos tanlang !\n");
            printf("\nPlastik karta orqali: {1}  naqt pul orqali: {2} \n");
            scanf("%d", &tanlash2);

            switch (tanlash2)
            {
            case 1:
                printf("Plastik karta orqali sizning to'lovingiz muofiqiyatli amalga oshirildi.\n\n");
                break;
            case 2:
                printf("Naqt pul orqali sizning to'lovingiz muofiqiyatli amalga oshirildi.\n\n");
                break;
            default:
                printf("Natog'ri raqam bosildi, ammo to'lov amalga oshdi.\n\n");
                break;
            }

            strcpy(satr[100].name, ism);
            strcpy(satr[100].familiya, familiy);
            strcpy(satr[100].login, kredit_raqam);
            strcpy(satr[100].money, summa);
            strcpy(satr[100].vaqt, time);

            // time_t current_time;
            // time(&current_time);

            fprintf(filepointer, "%s,", satr[100].name);
            fprintf(filepointer, "%s,", satr[100].familiya);
            fprintf(filepointer, "%s,", satr[100].login);
            fprintf(filepointer, "%s,", satr[100].money);
            fprintf(filepointer, "%s\n", satr[100].vaqt);
            fclose(filepointer);
            break;
        case 2:
            printf("");
            break;

        default:
            printf("Boshqa funksiya qo'shilmagan.\n");
            break;
        }

        break;
    case 2:
        printf("Siz XAL_QBANK bo'limidasiz.\n");
        printf("Iltimos, variantni tanlang.\n\n");
        printf("\t\t\t*************\t\t\t\t*************\n");
        printf("\t\t\t*  To'lov   *\t\t\t\t*  Qolgani  *\n");
        printf("\t\t\t* click: 1. *\t\t\t\t* click: 2. *\n");
        printf("\t\t\t*************\t\t\t\t*************\n");

        scanf("%d", &tanlov2);
        switch (tanlov2)
        {
        case 1:
            filepointer = fopen("Xalq_bank.txt", "a+");

            printf("Ismingizni kiriting. ");
            scanf("%s", ism);
            printf("Familiyangizni kiriting. ");
            scanf("%s", familiy);
            printf("Kredit_raqamingizni kiriting. ");
            scanf("%s", kredit_raqam);
            printf("Summani kiriting. ");
            scanf("%s", summa);
            printf("Sanani kiriting. ex: (10.12.2022) ");
            printf("Iltimos tanlang !\n");
            printf("\nPlastik karta orqali: {1}  naqt pul orqali: {2} \n");
            scanf("%d", &tanlash2);

            switch (tanlash2)
            {
            case 1:
                printf("Plastik karta orqali sizning to'lovingiz muofiqiyatli amalga oshirildi.\n\n");
                break;
            case 2:
                printf("Naqt pul orqali sizning to'lovingiz muofiqiyatli amalga oshirildi.\n\n");
                break;
            default:
                printf("Natog'ri raqam bosildi, ammo to'lov amalga oshdi.\n\n");
                break;
            }

            strcpy(satr[100].name, ism);
            strcpy(satr[100].familiya, familiy);
            strcpy(satr[100].login, kredit_raqam);
            strcpy(satr[100].money, summa);
            strcpy(satr[100].vaqt, time);

            // time_t current_time;
            // time(&current_time);

            fprintf(filepointer, "%s,", satr[100].name);
            fprintf(filepointer, "%s,", satr[100].familiya);
            fprintf(filepointer, "%s,", satr[100].login);
            fprintf(filepointer, "%s,", satr[100].money);
            fprintf(filepointer, "%s\n", satr[100].vaqt);
            fclose(filepointer);
            break;
        case 2:
            printf("");
            break;

        default:
            printf("Boshqa funksiya qo'shilmagan.\n");
            break;
        }
        fclose(filepointer);
        break;
    case 3:
        printf("Siz IPATEKA_BANK bo'limodasiz.\n");
        printf("Iltimos, variantni tanlang.\n\n");
        printf("\t\t\t*************\t\t\t\t*************\n");
        printf("\t\t\t*  To'lov   *\t\t\t\t*  Qolgani  *\n");
        printf("\t\t\t* click: 1. *\t\t\t\t* click: 2. *\n");
        printf("\t\t\t*************\t\t\t\t*************\n");

        scanf("%d", &tanlov2);
        switch (tanlov2)
        {
        case 1:
            filepointer = fopen("Ipateka_bank.txt", "a+");

            printf("Ismingizni kiriting. ");
            scanf("%s", ism);
            printf("Familiyangizni kiriting. ");
            scanf("%s", familiy);
            printf("Kredit_raqamingizni kiriting. ");
            scanf("%s", kredit_raqam);
            printf("Summani kiriting. ");
            scanf("%s", summa);
            printf("Sanani kiriting. ex: (10.12.2022) ");
            scanf("%s", time);
            printf("Iltimos tanlang !\n");
            printf("\nPlastik karta orqali: {1}  naqt pul orqali: {2} \n");
            scanf("%d", &tanlash2);

            switch (tanlash2)
            {
            case 1:
                printf("Plastik karta orqali sizning to'lovingiz muofiqiyatli amalga oshirildi.\n\n");
                break;
            case 2:
                printf("Naqt pul orqali sizning to'lovingiz muofiqiyatli amalga oshirildi.\n\n");
                break;
            default:
                printf("Natog'ri raqam bosildi, ammo to'lov amalga oshdi.\n\n");
                break;
            }

            strcpy(satr[100].name, ism);
            strcpy(satr[100].familiya, familiy);
            strcpy(satr[100].login, kredit_raqam);
            strcpy(satr[100].money, summa);
            strcpy(satr[100].vaqt, time);

            // time_t current_time;
            // time(&current_time);

            fprintf(filepointer, "%s,", satr[100].name);
            fprintf(filepointer, "%s,", satr[100].familiya);
            fprintf(filepointer, "%s,", satr[100].login);
            fprintf(filepointer, "%s,", satr[100].money);
            fprintf(filepointer, "%s\n", satr[100].vaqt);
            fclose(filepointer);
            break;
        case 2:
            printf("");
            break;

        default:
            printf("Boshqa funksiya qo'shilmagan.\n");
            break;
        }
        fclose(filepointer);
        break;
    case 4:
        printf("Bankni Tanlang.\n\n");
        printf("Agro_bank: {1}         Xalq_bank: {2}          Ipateka_bank: {3} \n\n");
        scanf("%d", &tanlov4);
        switch (tanlov4)
        {
        case 1:
            filepointer = fopen("Agro_bank.txt", "r");
            while (fgets(string4, 10000, filepointer))
            {
                for (int i = 0; i < strlen(string4); i++)
                {
                    printf("%c", string4[i]);
                }
            }
            fclose(filepointer);
            break;
        case 2:
            filepointer = fopen("Xalq_bank.txt", "r");
            while (fgets(string4, 10000, filepointer))
            {
                for (int i = 0; i < strlen(string4); i++)
                {
                    printf("%c", string4[i]);
                }
            }
            fclose(filepointer);
            break;
        case 3:
            filepointer = fopen("Ipateka_bank.txt", "r");
            while (fgets(string4, 10000, filepointer))
            {
                for (int i = 0; i < strlen(string4); i++)
                {
                    printf("%c", string4[i]);
                }
            }
            fclose(filepointer);
            break;

        default:
            printf("Boshqa bank ma'lumotlari yuklanmagan.\n\n");
            break;
        }
        break;

    default:
        printf("Boshqa bank tizimi yuklanmagan...\n\n");
        break;
    }
    menu();
}