#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main (){
    while(1){
        srand(time(NULL));
  
        char  start[5]; int back=1, go;
        int weather,i; int num1, num2, num3, num4;
        printf("\t\t\t\t\tAssalomu alaykum !\n\n\t\t\t");
        printf("Ucell_xabarchi_botni boshlash uchun [go=100] _so'zini kiriting..");
        scanf("%d",&go);
        if(go==100){
        printf("Dastlab sizni kun va ob_havo bilan tanishtiramiz:\n");
            time_t now;
            time(&now);
            printf("\n");
            printf(" \t\t   %s   ",ctime(&now));

            for(i=1;i<2;i++){
                weather=rand()%100-rand()%100;
            if(weather<0){
                printf("Freezing weather!\n");
            }else if(weather>0 && weather<10){
            printf("Cold_weather!\n");
            }else if(weather>10 && weather<30){
                printf("Hot _weather!\n");
            }else if(weather>30){
                printf("Very _hot weather!\n");
               }
            }
            while(back!=0){
            int op;
            printf("\t\t\t\tYana_bir bor Salom! \n\n");
            printf("Jismoniy shaxslar bo'limiga o'tish uchun _1 bosing!\n");
   
            printf("Operator bilan bog'lanish uchun _0 bosing!\n");
            scanf("%d",&op);
            switch (op)
            {
            case 1:
            printf("\n\t\t\tJIsmoniy shaxislar bo'limiga xush kelibsiz..!\t\t\n\n");
          int num;
           printf("Tariflar haqida ma'lumot ucun_1 bosing:\n\n");
           printf("Smslar haqida ma'lumot ucun_2 bosing:\n\n");
           printf("Mblar haqida ma'lumot ucun_3 bosing:\n\n");
           printf("News haqida ma'lumot ucun_4 bosing:\n\n");
            scanf("%i",&num);
           switch (num)
           {
           case 1:
              
              printf("Tantana(tarifi) haqida ma'lumot ucun_1 bosing:\n");
              printf("Cosmo(tarifi) haqida ma'lumot ucun_2 bosing:\n");
              printf("Student(tarifi)  haqida ma'lumot ucun_3 bosing:\n");
              scanf("%d",&num1);
           if(num1==1){
              printf("\n\t\tTantana(tarifi) haqida ma'lumot:\t\n");
              printf("Hurmatli abonent!\n");
              printf("Mamnuniyat bilan shuni xabar qilamizki, «Tantana» tariflar tizimi yanada jozibador bo‘lmoqda!");
              printf("2020-yil 05-noyabrdan «Tantana» tizimi tarif rejalarida O‘zbekiston bo‘yicha daqiqalar va SMSlar limitlari ko‘paymoqda.\n");
              printf("Supper tantana:  ");
              printf("\t\t\t\ta).Oylik to'lov: $3 \n\n ");
              printf("\t\t\t\tb).O'zbekiston bo'yicha chaqiruv limiti: 3000_minute \n\n ");
              printf("\t\t\t\tc).O'zbekiston bo'yicha smslar limiti: 5000 \n\n ");
              printf("\n");
              printf("Katta tantana:  ");
              printf("\t\t\t\ta).Oylik to'lov: $2 \n\n ");
              printf("\t\t\t\tb).O'zbekiston bo'yicha chaqiruv limiti: 2500_minute \n\n ");
              printf("\t\t\t\tc).O'zbekiston bo'yicha smslar limiti: 3000 \n\n ");
              printf("\n");
              printf(" Tantana:  ");
              printf("\t\t\t\ta).Oylik to'lov: $1.5 \n\n ");
              printf("\t\t\t\tb).O'zbekiston bo'yicha chaqiruv limiti: 2000_minute \n\n ");
              printf("\t\t\t\tc).O'zbekiston bo'yicha smslar limiti: 1500 \n\n ");
           }
           if(num1==2){
            printf("\n\t\t Cosmo(tarifi) haqida ma'lumot :\t\n");
            printf("Hurmatli abonent!\n");
            printf("Minglab MB internet-trafik, O‘zbekiston bo‘ylab muloqot uchun minglab daqiqalar va SMSlar.\n");
            printf("07.04.2022-y.dan e’tiboran COSMO tizimi tarif rejalariga ulanish va o‘tish mavjud emas\n");
            printf("Cosmo 16:");
            printf("\n\t\t\ta). Oylik abonet to'lovi: $1.6\n");
            printf("\n\t\t\tb). O‘zbekiston bo‘yicha chiquvchi qo‘ng‘iroqlarning oylik limiti: 1200 minute\n");
            printf("\n\t\t\tc). Barcha yo‘nalishlar uchun oylik internet-trafik limiti: 3.GB\n");
            printf("\n");
             printf("Cosmo 23:");
            printf("\n\t\t\ta). Oylik abonet to'lovi: $2.3\n");
            printf("\n\t\t\tb). O‘zbekiston bo‘yicha chiquvchi qo‘ng‘iroqlarning oylik limiti: 1700 minute\n");
            printf("\n\t\t\tc). Barcha yo‘nalishlar uchun oylik internet-trafik limiti: 4.GB\n");
            printf("\n");
             printf("Cosmo 28:");
            printf("\n\t\t\ta). Oylik abonet to'lovi: $2.8\n");
            printf("\n\t\t\tb). O‘zbekiston bo‘yicha chiquvchi qo‘ng‘iroqlarning oylik limiti: 2200 minute\n");
            printf("\n\t\t\tc). Barcha yo‘nalishlar uchun oylik internet-trafik limiti: 6.GB\n");
           }
           if(num1==3){
            printf("\n\t\t Student(tarifi) haqida ma'lumot :\t\n");
            printf("Hurmatli abonent!\n");
            printf("Hatto o‘qish ham osonlashadi!\n");
            printf("10.12.2021-y.dan e’tiboran «Student» tarif rejasi yangi ulanishlar uchun yopildi.\n");
            printf("Student :");
            printf("\n\t\t\ta). Oylik abonet to'lovi: $1\n");
            printf("\n\t\t\tb). O‘zbekiston bo‘yicha chiquvchi qo‘ng‘iroqlarning oylik limiti: 700 minute\n");
            printf("\n\t\t\tc). Barcha yo‘nalishlar uchun oylik internet-trafik limiti: 3.5GB\n");
           }
                
            break;
           case 2:
           
             printf("Yuqori to'plam sms paket _1:\n");
             printf("Haftalik to'plam sms paket _2:\n");
             printf("Kunlik to'plam sms palet _3:\n");
             scanf("%d",&num2);
           if(num2==1){
               printf("\n_Yuqori toplamli sms paketi haqida...\t\n");
               printf("Ucell abonenti...\n");
               printf("Unprecedented low prices for SMS within Uzbekistan!\n");
               printf("\n\t\t\t a).SMS-Package 50. Package Price: $1.7\n");
               printf("\n\t\t\t b).SMS-Package 150. Package Price:&4.2\n");
               printf("\n\t\t\t c).SMS-Package 500. Package Price:$10\n");
               printf("NOTE: agar siz xarid qilishni xoxlasangzi:\n");
               printf("Aloqa uchun: 8123\n");
               printf("O'tish uchun: *147#\n");
           }
           if(num2==2){
               printf("\n_Haftalik sms paketi haqida...\t\n");
               printf("Ucell abonenti...\n");
               printf("Unprecedented low prices for SMS within Uzbekistan!\n");
               printf("\n\t\t\t a).SMS-Package 100. Package Price: $1\n");
               printf("\n\t\t\t b).SMS-Package 200. Package Price:&2\n");
               printf("\n\t\t\t c).SMS-Package 300. Package Price:$3.5\n");
               printf("=====NOTE: agar siz xarid qilishni xoxlasangzi:======\n");
               printf("=====Aloqa uchun: 8123\n======");
               printf("=====O'tish uchun: *147#\n======");
           }
           if(num2==3){
               printf("\n_Kunlik sms paketi haqida...\t\n");
               printf("Ucell abonenti...\n");
               printf("Unprecedented low prices for SMS within Uzbekistan!\n");
               printf("\n\t\t\t a).SMS-Package 80. Package Price: $0.1\n");
               printf("\n\t\t\t b).SMS-Package 140. Package Price:&0.8\n");
               printf("\n\t\t\t c).SMS-Package 220. Package Price:$1.5\n");
               printf("=====NOTE: agar siz xarid qilishni xoxlasangzi:======\n");
               printf("=====Aloqa uchun: 8123\n======");
               printf("=====O'tish uchun: *147#\n======");
           }
              
           break;
           case 3:
             
               printf("Cheksiz Mb toplami _1:\n");
               printf("Kunlik Mb toplami _2:\n");
               printf("Tungi Mb toplami _3:\n");
                 scanf("%d",&num3);
              if(num3==1){
               printf("Arzon narxda, ko‘proq hajimga ega bolmoqchimisiz?!\n");
               printf("Hurmatli abonent..\n");
               printf("Cheksiz MB to'plami\n");
               printf("\n\t\t\tBelgilangan summasi: 89000so'm\n");
               printf("\n\t\t\t To'plamga ulanish uchun: *555*3#\n");
               printf("\n\t\t\tTrafik qoldig'ini tekshirsh uchun: *107#\n");
              }
              if(num3==2){
               printf("Arzon narxda, ko‘proq hajimga ega bolmoqchimisiz?!\n");
               printf("Hurmatli abonent..\n");
               printf("31 kun uchun Mb toplamlarini xarit qiling..\n");
               printf("To'plam_1\n");
               printf("\n\t\t\tBelgilangan summasi: 45000so'm\n");
               printf("\n\t\t\t To'plamga ulanish uchun: *555*3*1#\n");
               printf("\n\t\t\tTrafik qoldig'ini tekshirsh uchun: *107#\n");
               printf("\n");
               printf("To'plam_3\n");
               printf("\n\t\t\tBelgilangan summasi: 65000so'm\n");
               printf("\n\t\t\t To'plamga ulanish uchun: *555*3*3#\n");
               printf("\n\t\t\tTrafik qoldig'ini tekshirsh uchun: *107#\n");
              }
              if(num3==3){
               printf("Arzon narxda, ko‘proq hajimga ega bolmoqchimisiz?!\n");
               printf("Hurmatli abonent..\n");
               printf("Tungi cheksiz  MB to'plami\n");
               printf("\n\t\t\tBelgilangan summasi: 30000so'm\n");
               printf("\n\t\t\t To'plamga ulanish uchun: *555*2#\n");
               printf("\n\t\t\tTrafik qoldig'ini tekshirsh uchun: *107#\n"); 
              }
            
            break;
            case 4:
            
               printf("Chetel yangiliklari _1:\n");
               printf("O'zbekiston yangiliklari _2:\n");
               printf("Toshkent yangiligi uchun _3:\n");
               scanf("%d",&num4);
             if(num4==1)printf("AQSH_da bo'lgan voqialar haqida bilish uchun:https://www.sonomacountygazette.com/\n");
             if(num4==2) printf("O'zbekiston xabarlari haqida:https://kun.uz/uz/news/category/uzbekiston\n");
             if(num4==3) printf("Toshkent yangiliklar haqida:https://sputniknews-uz.com/keyword_Toshkent/\n");
             break;
             default:
               printf("Come here, if you have tendance to get data about tarfic-- press this site:_______\n");
             break;
           }
             break;
                
             case 0:
              printf("Operator bilan siz suhbatlashayotganingizda sizning suhbatingiz yozib olinadi:\n");
              printf("Iltimos , kutib turing .....\n");
             break;
               default:
              printf("Yuridik shaxislar bo'limiga o'tish uchun hali proggramma yakunlanmagan:\n");
              printf("\t\t\t\t============Sorry us========\t\t\t\n");
             break;
           }
            printf("please, press 1 if you want to back, but you may be finish this process: press _0\n");
            scanf("%d",&back);
          
     }
            printf("+++_bizning Ucell_bot_dan foydalanganingiz uchun biz minnaddormiz..+++\n");
            printf("\n\t\t\t=====Xayir salomat bo'ling=====\n\t");
            break;
            }
            printf("Iltimos, GO _ qiymatini to'g'ri kiriting >>>>\n");
            }
     return 0;
   }