#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{

    int saat;
    printf("OTOPARKTA KAC SAAT KALDIGINIZI GIRINIZ= ");
    scanf("%d",&saat);
    switch (saat) {
        case 0 ... 4 :
            printf("10 TL ODEMEN�Z GEREKMEKTED�R.");
            break;
        case 5 ... 8 :
            printf("12 TL ODEMEN�Z GEREKMEKTED�R.");
            break;
        case 9 ... 12 :
            printf("15 TL ODEMEN�Z GEREKMEKTED�R.");
            break;
        default:
            printf("20 TL ODEMEN�Z GEREKMEKTED�R.");
            break;
    }

 return 0;
}
