#include <stdio.h>
#include <math.h>
int main (){
    while(1){
        int Afto_1, Afto_2;
        int T_vaqt,S;
printf("Enter the Afto_1-tezligini:");
scanf("%d", &Afto_1);
printf("Enter the Afto_2-tezligini:");
scanf("%d", &Afto_2);
printf("Enter the T-Vaqt:");
scanf("%d", &T_vaqt);

S=(Afto_1*T_vaqt)+(Afto_2*T_vaqt);
printf("Birinchi va Ikkinchi Aftomibalr orasidagi Masofa=%d\n",S);
    }
    return 0;
}

        