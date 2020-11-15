#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,i;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&sayi);
    for(i=2;i<sayi;i++)
    {
        if (sayi%i==0)
           {printf("Sayi asal degildir.");
            break;
            }else if(sayi-1==i){
            printf("Sayi asaldir.");
        }
    }
return 0;
}
