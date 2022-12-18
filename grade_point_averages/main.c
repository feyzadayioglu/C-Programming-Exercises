#include <stdio.h>
#include <stdlib.h>

int main()
{
     int vize,finall,ortalama;
     printf("vize giriniz: ");
     scanf("%d",&vize);
     printf("final giriniz: ");
     scanf("%d",&finall);

     ortalama=vize*40/100+finall*60/100;
     printf("ortalamaniz: %d",ortalama);




    return 0;
}
