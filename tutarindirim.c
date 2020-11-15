int main()
{ 
    int x,y,sonuc,indirim;
    printf("x i giriniz:");
    scanf("%d/n", &x);
    printf("y i giriniz:");
    scanf("%d/n", &y);
    sonuc=x+y;

    if(sonuc<200)
    { printf("tutar= %d",sonuc);}
    else
    {
        indirim=y-(y*40/100);
        sonuc=indirim+x;
        printf("tutar: %d",sonuc);

    }

    return 0;
}
