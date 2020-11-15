#include <stdio.h>
#include <stdlib.h>
int main(){
     char sifre[10];
     int sonuc,hak=3;
     while(hak>0){
        printf("sifre: \n");
        scanf("%s",&sifre);
            sonuc=strcmp(sifre,"123456");
        if (sonuc==0){
            printf("Dogru girdiniz. \n");
            break;
        }
        else{
            printf("Yanlis girdiniz.\n");
            hak--;
        }
        if (hak==0) {
            printf("Sifrenizi 3 defa yanlis girdiniz, hakkiniz bitmistir.");
        }
    }
return 0;
}
