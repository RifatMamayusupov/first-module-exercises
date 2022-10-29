#include <stdio.h>
#include <string.h>


struct mashina {
    int raqami;
    char markasi[10];
    int sigimi;
    char brendi[10];
};


int main() {
    struct mashina mashinalar[5];

    mashinalar[0].raqami = 1;
    strcpy(mashinalar[0].markasi, "Nexia");
    mashinalar[0].sigimi = 4;
    strcpy(mashinalar[0].brendi, "Ravon");


    for(int i=1; i<5; i++){
        printf("Mashina raqamini kiriting: ");
        scanf("%d", &mashinalar[i].raqami);

        printf("Mashina markasini kiriting: ");
        scanf("%s", mashinalar[i].markasi);

        printf("Mashina sigimini kiriting: ");
        scanf("%d", &mashinalar[i].sigimi);

        printf("Mashina brendini kiriting: ");
        scanf("%s", mashinalar[i].brendi);

        printf("\n\n----------------\n\n");
    }


    for(int i=0; i<5; i++){
        printf("Raqami: %d\n", mashinalar[i].raqami);
        printf("Markasi: %s\n", mashinalar[i].markasi);
        printf("Sigimi: %d\n", mashinalar[i].sigimi);
        printf("Brendi: %s\n", mashinalar[i].brendi);
        printf("\n\n----------------\n\n");
    }

    return 0;
}