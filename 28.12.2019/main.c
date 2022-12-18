#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayilar[4];
    int i,N;
    printf("kac sayi gireceksiniz: ");
    scanf("%d",&N);

        for(i=0;i<N;i++){
            printf("sayi girin: ");
            scanf("%d",&sayilar[i]);
        }
        int enkucuk=sayilar[0];
        for(i=1;i<N;i++){
            if(sayilar[i]<enkucuk)
                enkucuk=sayilar[i];
        }

printf("en kucuk eleman:%d",enkucuk);


    return 0;
}
