#include <stdio.h>
#include <stdlib.h>

int main()
{
  int mesafe;
  int zaman;
  int hiz;

  printf("gidilecek mesafeyi giriniz: ");
  scanf("%d",&mesafe);
  printf("ne kadar zamanda varýlcagýný giriniz: ");
  scanf("%d",&zaman);

  hiz=mesafe/zaman;

  printf("hiz: %d",hiz);



    return 0;

}
