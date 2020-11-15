#include <stdio.h>
#include <stdlib.h>

int main()
{
    char karakter;
    printf("Karakter giriniz: ");
    scanf("%c",&karakter);

    if (karakter>='0'&&karakter<='9'){
        printf("Girilen karakter rakamdir.");
    }
    else if (karakter>='!'&&karakter<='?') {
        printf("Girilen karakter ozel karakterdir");
    }
    else {
       switch (karakter){
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'ı':
    case 'I':
    case 'i':
    case 'İ':
    case 'u':
    case 'U':
    case 'ü':
    case 'Ü':
    case 'o':
    case 'O':
    case 'ö':
    case 'Ö':
        printf("Girilen karakter sesli harftir.");
        break;
    default:
        printf("Girilen karakter sessiz harftir.");
        break;

    }}

    return 0;
}
