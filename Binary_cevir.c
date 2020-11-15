#include <stdio.h>
#include <stdlib.h>
int main(){
     int sayi,al=0,sonuc=0,i=1;
     printf("sayi gir: ");
     scanf("%d",&sayi);

     while (sayi>0){
        al=sayi%2;
        sayi/=2;
        sonuc+=(al*i);
        i*=10;
     }
     printf("%d",sonuc);
return 0;
}
