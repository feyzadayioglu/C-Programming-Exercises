#include <stdio.h>
#include <stdlib.h>

int main()
{
    int saat;
    int ucret;
    printf("mesai saatini giriniz: ");
    scanf("%d",&saat);

    if(saat<10){

    ucret=saat*5;
    printf("ucret: %d",ucret);
    }
    else
    if(10<saat<20){
        ucret=50+(saat-10)*3;
        printf("ucret: %d",ucret);
    }
    else
    if(saat>20){
        ucret=80+(saat-20)*2;
        printf("ucret: %d",ucret);
    }






     return 0;
}
