#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
   //  hali tugallanmagan;;;;
int main (){
            srand(time(NULL));
            int kassa,i; int beck=1;
            printf("\n\n\t\t\t===== XUSH KELIBSIZ MAKRO-SUPERMARKETIga ====\n");
            time_t now;
            time(&now);
            printf("\n");
            printf("\t\t\t  %s\n",ctime(&now));
                       while(beck!=0){
            printf("Marketning rastalri bilan tanishing:\n\n"
           "Dastlab:\t\t 1.Oziq ovqat \n"
                 "\t\t\t 2.Kiyim-kechak\n"
                 "\t\t\t 3.Texnalogiya\n"
                 "\t\t\t 4.Shirinliklar\n"
                 "\t\t\t Kassaga kiring va to'lov qiling...\n");
             printf("Kassaga kirish uchun_ 5 bosing..!\n ");
             scanf("%d",&kassa);     
             
             if(kassa==5) {    
             printf("WElcome to Kasaa::\n") ;
             printf("==========\n");
             printf("= KaSSa = \n");      
             printf("==========\n");
                }
              int maxsulot_soni, maxsulot_nomi; double dona, Umumiy_hisob, kg, kartoshka=7000;
              double piyoz=5000, uzum=8000, olma=15000,gosht=65000;
              printf("Enter the name of product:\n");
              scanf("%d",&maxsulot_nomi);
              if(maxsulot_nomi==1){
              int num;
              printf("\tMaxsulot turi:\n"
                        "\t\tOziq-ovqat\n");
           
            printf("1.Kartoshka\n"
                  "2.Piyoz\n"
                  "3.Uzum\n"
                  "4.Olma\n"
                  "5.Gosht\n" );
               
                                for(i=1; i<2; i++){
                                 printf("Maxsulotni tanlang  >>>>\n");
                                 scanf("%d",&num);
                           switch (num)
                            
                           {
                            
                           case 1:
                              printf("Necha kg kartoshka xarid qildingiz.....?\n");
                              scanf("%lf",&kg);
                              kartoshka*=kg;
                              printf("narxi:%lf\n",kartoshka*kg);
                              break;
                            case 2:
                              printf("Necha kg piyoz xarid qildingiz....?\n");
                              scanf("%lf",&kg);
                              piyoz*=kg;
                              printf("narxi: %lf\n",piyoz);
                            case 3:
                              printf("Necha kg Uzum xarid qildingiz......?\n ");
                              scanf("%lf",&kg);
                              uzum*=kg;
                              printf("narxi: %lf\n",uzum);    
                           case 4:
                              printf("Necha kg olma xarid qildingiz......?\n ");
                              scanf("%lf",&kg);
                              olma*=kg;
                              printf("narxi: %lf\n",olma); 
                           case 5:
                              printf("Necha kg gosht xarid qildingiz......?\n ");
                              scanf("%lf",&kg);
                              gosht*=kg;
                              printf("narxi: %lf\n",gosht); 
                           
                           default:
                             printf("Faqat siz yuqoridagi oziq-ovqat maxsulotlarini xarid qilgansiz..\n");
                              break;
                              
                              }
                              
                                 }
                                Umumiy_hisob=kartoshka+piyoz+uzum+olma+gosht;
                               printf("Jami summa %lf Ga teng sir\n",Umumiy_hisob);
                               
                        
                              }
                           
                           
                   if(maxsulot_nomi==2){
                         int num;
              printf("\tMaxsulot turi:\n"
                        "\t\tKiyim_kechak\n");
                        double bruyuk=120000,fudbalka=75000,shapka=35000,shortik=42000,kastiyum=324000;
           
              printf("1.Fudbolka\n"
                  "2.Bruyuk\n"
                  "3.Shapka\n"
                  "4.Shortik\n"
                  "5.Kastiyum\n" );
                               printf("Maxsulotni tanlang  >>>>\n");
                               scanf("%d",&num);
                               switch (num)
                                {
                              case 1:
                                printf("Nechta dona fudbalka Xarid qildiz.....?\n");
                                scanf("%lf",&dona);
                                fudbalka*=dona;
                                printf("%.0lf dona fudbolka %lf sum\n",dona,fudbalka);
                                break;
                              case 2:
                                printf("Nechta dona bruyuk Xarid qildiz.....?\n");
                                scanf("%lf",&dona);
                                bruyuk*=dona;
                                printf("%.0lf dona bruyuk %lf sum\n",dona,bruyuk);
                                break;
                              case 3:
                                printf("Nechta dona shapka Xarid qildiz.....?\n");
                                scanf("%lf",&dona);
                                shapka*=dona;
                                printf("%.0lf dona shapka %lf sum\n",dona,shapka);
                                break;
                              case 4:
                                printf("Nechta dona shortik Xarid qildiz.....?\n");
                                scanf("%lf",&dona);
                                shortik*=dona;
                                printf("%.0lf dona shortik %lf sum\n",dona,shortik);
                                break;
                              case 5:
                                printf("Nechta dona kastiyum Xarid qildiz.....?\n");
                                scanf("%lf",&dona);
                                kastiyum*=dona;
                                printf("%.0lf dona kastiyum %lf sum\n",dona,kastiyum);
                                break;
                              default:
                                printf("Siz bor yo'g'i yuqoridagi maxsulotlarni olaolasiz.....\n");
                                break;
                             }
                   }        
                                if(maxsulot_nomi==3){
                         int num;
              printf("\tMaxsulot turi:\n"
                        "\t\tTexnika_products\n");
                        double phone=1800000,computer=5800000,naushnik=220000,televizor=4500000;
           
              printf("1.Phone (ipone)\n"
                  "2.computer(Lenovo)\n"
                  "3.naushnik\n"
                  "4.Telivizor( LG )\n" );
                               printf("Maxsulotni tanlang  >>>>\n");
                               scanf("%d",&num);
                               switch (num)
                                {
                              case 1:
                                printf("Nechta dona Phone  Xarid qildiz.....?\n");
                                scanf("%lf",&dona);
                                phone*=dona;
                                printf("%.0lf dona phone %lf sum\n",dona,phone);
                                break;
                              case 2:
                                printf("Nechta dona computer Xarid qildiz.....?\n");
                                scanf("%lf",&dona);
                                computer*=dona;
                                printf("%.0lf dona computer %lf sum\n",dona,computer);
                                break;
                              case 3:
                                printf("Nechta dona naushnik Xarid qildiz.....?\n");
                                scanf("%lf",&dona);
                                naushnik*=dona;
                                printf("%.0lf dona naushnik %lf sum\n",dona,naushnik);
                                break;
                              case 4:
                                printf("Nechta dona TeLivizor Xarid qildiz.....?\n");
                                scanf("%lf",&dona);
                                televizor*=dona;
                                printf("%.0lf dona televizor %lf sum\n",dona,televizor);
                                break;
                              default:
                                printf("Siz bor yo'g'i yuqoridagi maxsulotlarni olaolasiz.....\n");
                                break;
                             }
                   }        
         
                                 if(maxsulot_nomi==4){
                         int num;
              printf("\tMaxsulot turi:\n"
                        "\t\tshirinliklar\n");
                        double tort=24000,chokalet=8000,marbila=35000,biscute=64000;
           
              printf("1.Tort\n"
                  "2.Chokalet\n"
                  "3.Marbila\n"
                  "4.Biscute\n" );
                               printf("Maxsulotni tanlang  >>>>\n");
                               scanf("%d",&num);
                               switch (num)
                                {
                              case 1:
                                printf("Nechta dona Tort Xarid qildiz.....?\n");
                                scanf("%lf",&dona);
                                tort*=dona;
                                printf("%.0lf dona tort %lf sum\n",dona,tort);
                                break;
                              case 2:
                                printf("Necha kg Chokalet Xarid qildiz.....?\n");
                                scanf("%lf",&dona);
                                chokalet*=dona;
                                printf("%.0lf kg chokalet %lf sum\n",dona,chokalet);
                                break;
                              case 3:
                                printf("Necha kg marbila Xarid qildiz.....?\n");
                                scanf("%lf",&dona);
                                marbila*=dona;
                                printf("%.0lf kg marbila %lf sum\n",dona,marbila);
                                break;
                              case 4:
                                printf("Necha kg biscute Xarid qildiz.....?\n");
                                scanf("%lf",&dona);
                                biscute*=dona;
                                printf("%.0lf kg biscute %lf sum\n",dona,biscute);
                                break;
                              default:
                                printf("Siz bor yo'g'i yuqoridagi maxsulotlarni olaolasiz.....\n");
                                break;
                             }
                   }   
                     printf("Agar siz davom ettirishni xoxlayszimi 1[ha] or 0[yoq]\n");
                     scanf("%d",&beck);
}
                              
               
                  printf("========Xayir salomat bo'ling=======\n");
                  printf("...Biz juda ham xursandmiz biz bilan xarid qilganingizdan... \n");

    return 0;
}