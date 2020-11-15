#include <stdio.h>
#include <stdlib.h>
int main(){
    int sayi,a,b,c,toplam=0;
    for (a=1;a<=9;a++){
        for (b=0;b<=9;b++){
            for (c=0;c<=9;c++){
               if (b==8){
                    sayi=a*100+b*10+c;
                    if (sayi%3==0){
                        toplam+=sayi;
                    printf("sayi: %d\n",sayi);
                    }
                }
            }
        }
    }
    printf("toplam: %d",toplam);
return 0;
}
