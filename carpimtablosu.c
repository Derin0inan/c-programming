#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for (i=1;i<=10;++i)
    {
        for (j=1;j<=5;++j){
            printf("%d*%d=%d\t\t",j,i,i*j);
        }
        printf("\n");
    }
    printf("\n\n");
    for (i=1;i<=10;++i)
    {
        for (j=6;j<=10;++j){
            printf("%d*%d=%d\t\t",j,i,i*j);
        }
        printf("\n");
    }
    return 0;
}
