#include <stdio.h>
#include <stdlib.h>
float dizi_toplam(float d[],int sayi){
  float toplam=0;
  for ( int i=0;i<sayi;i++){
    toplam+=d[i];
  }
return toplam;
}
int main(){
    int i;
    float gun[7],x,toplam,ortalama;
    for (i=0;i<7;i++){
        printf("%d. gunun sicakligini giriniz: ",i+1);
        scanf("%f",&x);
        gun[i]=x;
    }
    toplam=dizi_toplam(gun,7);
    ortalama=toplam/7;
    printf("toplam hava sicakligi: %.1f\n",toplam);
    printf("ortalama hava sicakligi: %.2f\n",ortalama);
return 0;
}
