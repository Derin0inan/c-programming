#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
     //sansli cekilis uygulamasi
     char isim[10],soyisim[10];
     int secim,sayi;
     printf("sansli cekilis uygulamasina hosgeldiniz\nLutfen kullanici adinizi giriniz: ");
     scanf("%s",&isim);
     printf("Lutfen  soyadinizi giriniz: ");
     scanf("%s",&soyisim);
     printf("Islemlerden biri icin secim yapiniz\n[1]Sansli cekilisi dene\n[2]Kullanici bilgilerini kontrol et \n");
     scanf("%d",&secim);
     switch (secim)
     {
         case 1: printf("Su anda sansli secim uygulamasindasiniz. Lutfen 1-5 arasinda bir deger giriniz: \n");
         scanf("%d",&sayi);
         srand(time(0));
         int randomsayi=1+rand()%5;
         if (sayi<=5&&sayi>0){
            if (randomsayi==sayi){
                printf("girdiginiz sayi:%d\nCekilisteki sayi:%d",sayi,randomsayi);
                printf("\nTebrikler kazandiniz!");
                }
            else{
                printf("girdiginiz sayi:%d\nCekilisteki sayi:%d",sayi,randomsayi);
                printf("\nKaybettiniz!");}
        }
        else
                printf("1 ile 5 arasinda girdiginize emin olun.");
            break;
         case 2: printf("kullanici adiniz:%s\nkullanici soyadiniz:%s",isim,soyisim);
         break;

     }

    return 0;
}
