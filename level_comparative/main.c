#include <stdio.h>
#include <stdlib.h>

int main()
{
 float dogru;
 float yanlis;
 float net;

 printf("dogru sayisini giriniz: ");
 scanf("%f",&dogru);
 printf("yanlis sayisini giriniz: ");
 scanf("%f",&yanlis);

 net=dogru-yanlis/4.0;

 printf("net %f\n",net);

 if(net<10)
    printf("beginner\n");
  else
    if(10<=net<30)
        printf("elementary\n");
  else
    if(30<=net<50)
    printf("preintermediate\n");
  else
    if(net>50)
    printf("upper\n");



    return 0;
}
