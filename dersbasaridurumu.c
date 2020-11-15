#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Bir üniversitede ogrencilerin ortalamalari 50 ve üzerinde ise dersten basarili sayilmaktadir. Ögrencinin vize notu
    ortalamaya %40 final notu %60 etki ettigi bilindigine göre ögrencilerin ders basari durumlarini gosteren programi yazalim.
    */
    int vize,finalnotu;
    double vizenotu,finall,ortalama;
    printf("Vize notu giriniz: ");
    scanf("%d",&vize);
    printf("Final notu giriniz: ");
    scanf("%d",&finalnotu);
    vizenotu=vize*(0.4);
    finall=finalnotu*(0.6);
    ortalama=vizenotu+finall;
    if (ortalama>=50){
    printf("Tebrikler gectiniz.");
    }else {
        printf("Kaldiniz.");
    }
    return 0;
}
