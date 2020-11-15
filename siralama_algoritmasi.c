#include <stdio.h>
#include <stdlib.h>
int main(){
    int A[10]={6,17,13,21,38,24,15,9,10,42};
    int i,j,en_kucuk_sira;
    for (i=0;i<10;i++){
        printf("%d ",A[i]);
    }
    printf("\n\n");

    for (i=0;i<=8;i++){
        en_kucuk_sira=i;
        for (j=i+1;j<=9;j++){
            if(A[j]<A[en_kucuk_sira]){
                en_kucuk_sira=j;
            }
        }
        int tmp=A[i];
        A[i]=A[en_kucuk_sira];
        A[en_kucuk_sira]=tmp;
    }

    for (i=0;i<10;i++){
        printf("%d ",A[i]);
    }
return 0;
}
