#include <stdio.h>
#include <stdlib.h>

int main(){

int satir,sutun,i,j;
printf("satir girin: ");
scanf("%d",&satir);
printf("sutun girin: ");
scanf("%d",&sutun);

for (i=0;i<satir;i++){
    for (j=0;j<sutun;j++){
        if ((i==0||i==satir-1)&&(j==0||j==sutun-1)){
            printf("0");
        }
        else if (i==0||i==satir-1||j==0||j==sutun-1){
            printf("1");
        }
        else printf("0");
    }printf("\n");}
    return 0;
}
