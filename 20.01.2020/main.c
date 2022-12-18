#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b;
   float ortalama=0;
   printf("sayi gir: ");
   scanf("%d",&a);
   printf("sayi gir: ");
   scanf("%d",&b);
    ortalama=(float)(2*a*b)/(a+b);
    printf("ortalama: %f",ortalama);

    return 0;
}
