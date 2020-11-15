int main(){
     int poz,neg,i,top=0,sayac=0;
     double ort;

     printf("Lutfen pozitif ve negatif birer sayi giriniz: ");
     scanf("%d %d",&poz,&neg);
     for (i=neg;i<=poz;i++){
        top+=(i*i);
        sayac++;
     }
     ort=(float)top/sayac;
     printf("kare ortalamasi: %.2f\n",ort);
     printf("toplami: %d",top);
return 0;
}
