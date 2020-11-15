#include <stdio.h>
#include <stdlib.h>
int main(){
     int altDeger,ustDeger,i,j,sayac=1;
     printf("Lutfen alt degeri giriniz: ");
     scanf("%d",&altDeger);
     printf("Lutfen ust degeri giriniz: ");
     scanf("%d",&ustDeger);
     i=altDeger;
     while (i<=ustDeger){
         sayac=1;
        for (j=2;j<i;j++){
            if (i%j==0)
                sayac=0;
        }
        if (sayac==1)
            printf("%d ",i);
        i++;
     }
return 0;
}
