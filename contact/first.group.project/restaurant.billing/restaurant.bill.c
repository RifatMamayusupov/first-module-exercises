#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void header();
void body();
void total();


struct Taom{
    
};




void header(){
    char name[50];
    char date[50];

    printf("\n\n");
    printf("\t    AI.Restaurant");
    printf("\n\t   ---------------------");
    printf("\nVaqti: %s", date);
    printf("\nIsmi: %s", name);
    printf("\n");
    printf("\n-----------------------------\n");
    printf("Taomlar\t\t");
    printf("Miqdori\t\t");
    printf("Jami\t\t");
    printf("\n------------------------------");
    printf("\n\n");
}


void body(){
    char taomlar[100];
    int miqdori;
    float jami;

    printf("%s\t\t", taomlar);
    printf("%d\t\t", miqdori);
    printf("%.2f\t\t", miqdori * jami);
    printf("\n");
}



void total(){

    float total;
    float skidka = 0.1 * total;
    float netTotal = skidka - total;
    float cgst = 0.09 * netTotal, grandtotal = netTotal + 2*cgst;
    printf("----------------------------------------\n");
    printf("Total\t\t\t%.2f", total);
    printf("\nDicount @10%s\t\t\t%.2f", "%", skidka);
    printf("\n\t\t\t\t----------");
    printf("\nNet Total\t\t\t%.2f", netTotal);
    printf("\nCGST @9%s\t\t\t%.2f", "%", cgst);
    printf("\nSGST @9%s\t\t\t%.2f", "%", cgst);

    printf("\n----------------------------------------");

    printf("\nGrandTotal\t\t\t%.2f", grandtotal);
    printf("\n----------------------------------------");
}



int main(){

    int tanlov;

    printf("\t============ AI. RESTAURANT ============\n");
    printf("\n1. Buyurtma Qoshish");
    printf("\n2. Bari buyurtmani korish");
    printf("\n3. Buyurtmani qidirish");
    printf("\n4. Chiqish!");

    printf("\n\nListidagi raqmlardan birini tanlang: ");
    scanf("%d", &tanlov);
    printf("\nSiz tanlagan %d", tanlov);

    switch (tanlov){
        case 1;
        printf("\nIsmingizi kiriting:\t");
        break;
    }

    printf("\n\n");

    return 0;
}

