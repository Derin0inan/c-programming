#include <stdio.h>
#include <stdlib.h>
int main(){
     char karakter;
     int a,i,j,k;
     printf("Lutfen bir karakter giriniz: ");
     scanf("%c",&karakter);
     printf("Satir sayisi giriniz: ");
     scanf("%d",&a);
     for (i=1;i<=a;i++){
        for (j=1;j<=a-i;j++){
            printf(" ");
        }
        for (k=1;k<=2*i-1;k++){
            printf("%c",karakter);
        }
        printf("\n");
    }
return 0;
}
