#include <stdio.h>
#include <stdlib.h>
int main(){
    int A[10]={1,13,23,45,67,54,33,21,12,90};
    while (1){
        int i,aranan;
        printf("Lütfen aradiginiz sayiyi giriniz: \n");
        scanf("%d",&aranan);
        int yer=-1;
        for (i=0;i<10;i++){
            if (A[i]==aranan){
                yer=i;
            }
        }
        if(yer==-1)
            printf("Dizide bulunmamaktadir.\n");
        else
        printf("Dizide bulundugu yer: %d\n",yer);
    }
return 0;
