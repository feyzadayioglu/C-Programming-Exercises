#include <stdio.h>
#include <stdlib.h>


struct kimlik {
char isim[20];
int gun;
int ay;
int yil;
};


int kucuguBul(struct kimlik Kisi[],int sayi) {
    int i;
    int enkucuk=0;
  for(i=1; i<sayi; i++){
        if(Kisi[enkucuk].yil<Kisi[i].yil){
            enkucuk=i;
        }
        else if(Kisi[enkucuk].yil==Kisi[i].yil && Kisi[enkucuk].ay<Kisi[i].ay){

                enkucuk=i;
            }
            else if(Kisi[enkucuk].ay==Kisi[i].ay && Kisi[enkucuk].gun<Kisi[i].gun){


                    enkucuk=i;
                }
    }
    return enkucuk;
}

int main()
{
    int sayi,i;
    printf("Kisi sayisini giriniz: ");
    scanf("%d",&sayi);
    struct kimlik Kisi[sayi];

    for(i=0;i<sayi;i++) {
        printf("%d. kisinin ismini giriniz:",i+1);
        scanf("%s",&Kisi[i].isim);
        printf("%d. kisinin dogum tarihini giriniz:\n ",i+1);
        printf("Gun:");
        scanf("%d",&Kisi[i].gun);
        printf("Ay:");
        scanf("%d",&Kisi[i].ay);
        printf("Yil:");
        scanf("%d",&Kisi[i].yil);
        printf("\n");
    }
    printf("Kisi Bilgileri\n------------------------------\n");
    for(i=0;i<sayi;i++) {
        printf("%s - %d / %d / %d\n",Kisi[i].isim,Kisi[i].gun,Kisi[i].ay,Kisi[i].yil);
    }
    printf("------------------------------\n\n");

    int enkucuk = kucuguBul(Kisi,sayi);
    printf("En Kucuk Kisinin ismi: %s\n\n",Kisi[enkucuk].isim);
    printf("En Kucuk Kisinin Dogum Tarihi: %d / %d / %d",Kisi[enkucuk].gun,Kisi[enkucuk].ay,Kisi[enkucuk].yil);
    return 0;
}


