#include <stdio.h>
#include <stdlib.h>
void hesapla(int toplam,int *yil,int *ay,int *gun){
int kalan;
*yil=toplam/365;
kalan=toplam%365;
*ay=kalan/30;
kalan=kalan%30;
*gun=kalan;


}


int main(){
  int sayi,yil,ay,gun;
    printf("Isin bitme suresinin kac gun oldugunu giriniz: ");
    scanf("%d",&sayi);
    hesapla(sayi,&yil,&ay,&gun);

    printf("%d yil %d ay %d gun surer.",yil,ay,gun);

    return 0;
}


