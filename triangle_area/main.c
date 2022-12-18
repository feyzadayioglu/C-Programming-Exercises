#include <stdio.h>
#include <stdlib.h>

int main()
{
  int taban;
  int yukseklik;
  float alan;


   printf("taban degeri: ");

   scanf("%d\n",&taban);


   printf("yukseklik degeri: ");

   scanf("&d\n",&yukseklik);


   printf("alan degeri: ");

   scanf("%f\n",&alan);

   alan=(taban*yukseklik)/2.0;

   printf("alan:%f\n",alan);



    return 0;
}
