#include <stdio.h>
#include <stdlib.h>
int main(){
    int basamak;
    printf("Kac basamak istiyorsunuz: ");
    scanf("%d",&basamak);
    int i,j,a=1;
    for (i=1;i<=basamak;i++){
        for (j=0;j<i;j++){
            printf("%d",a);
        }
        if (a==1)
            a=0;
        else
            a=1;
        printf("\n");
    }
return 0;
}
