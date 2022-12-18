#include <stdio.h>
#include <stdlib.h>

int main()
{ char secim;
 int sayi1,sayi2;
 printf("lutfen yapacaginiz islemi seciniz.\n");
 printf("---------------------\n");
 scanf("%c",&secim);
 printf("seciminiz: %c\n",secim);
 printf("sayi1 degerini giriniz: ");
 scanf("%d",&sayi1);
 printf("sayi2 degerini giriniz: ");
 scanf("%d",&sayi2);
 switch(secim){
case '+':
    printf("%d+%d=%d",sayi1,sayi2,(sayi1+sayi2));
break;
case '-':
    printf("%d-%d=%d",sayi1,sayi2,sayi1-sayi2);
 break;
case '/':
     printf("%d/%d=%d",sayi1,sayi2,(sayi1/sayi2));
 break;

case '*':
     printf("%d*%d=%d",sayi1,sayi2,sayi1*sayi2);
 break;

default:
    printf("gecersiz secim!");
 }





}


