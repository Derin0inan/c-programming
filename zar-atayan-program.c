#include <stdio.h>
#include <stdlib.h>
int main(){
     int oyuncuSayisi,sayi,i=0;
     printf("OYUNCU SAYISI: ");
     scanf("%d",&oyuncuSayisi);
     srand(time(0));
     while (1){
        sayi=rand()%7;
        if (sayi!=0){
            printf("%d. kisi zar degeri: %d\n",i+1,sayi);
            i++;}
        if (oyuncuSayisi==i)
            break;
     }
return 0;
}
