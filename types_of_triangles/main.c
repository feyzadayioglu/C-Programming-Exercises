#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kenar1;
    int kenar2;
    int kenar3;
    int cevre;

    printf("kenar1'i giriniz: ");
    scanf("%d",&kenar1);
    printf("kenar2'yi giriniz: ");
    scanf("%d",&kenar2);
    printf("kenar3'ü giriniz: ");
    scanf("%d",&kenar3);

    cevre=kenar1+kenar2+kenar3;

    printf("cevre %d\n",cevre);

     if(kenar1=kenar2,kenar2=kenar3,kenar1=kenar3)
        printf("eskenar ucgen\n");
     else
        if(kenar1=kenar2,kenar1=kenar3,kenar2=kenar3)
        printf("ikizkenar ucgen\n");
     else
        if(kenar1!=kenar2!=kenar3)
        printf("cesitkenar ucgen\n");







    return 0;
}
