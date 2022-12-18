#include <stdio.h>
#include <stdlib.h>

void main()
{
   int sayi1,sayi2,sonuc,secim;
   printf("\n 1.toplama icin 1 e basiniz");

   printf("\n 2.cikarma icin 2 e basiniz");

   printf("\n 3.carpma icin 3 e basiniz");

   printf("\n 4.bolme icin 4 e basiniz");
   printf("\n seciminiz?");
   scanf("%d",&secim);
   switch(secim)
  {

  case 1:
     printf("1 e basildi\n");
      scanf("%d%d",&sayi1,&sayi2);
       sonuc=sayi1+sayi2;
       printf("%d",sonuc);
       break;
   case 2:
     scanf("%d%d",&sayi1,&sayi2);
     sonuc=sayi1-sayi2;
     printf("%d",sonuc);
   case 3:
     scanf("%d%d",&sayi1,&sayi2);
     sonuc=sayi1/sayi2;
     printf("%d",sonuc);
     break;
  }
    return 0;
}
