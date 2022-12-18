#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,j,sayi;
int yildiz,bosluk;
printf("pozitif bir tamsayi giriniz: ");
scanf("%d",&sayi);

bosluk=2*sayi-2;
yildiz=1;
for(i=0;i<sayi;i++){
    for(j=0;j<yildiz;j++){
        printf("*");
    }for(j=0;j<bosluk;j++){
        printf(" ");

    }for(j=0;j<yildiz;j++){
        printf("*");
    }
    bosluk=bosluk-2;
    yildiz=yildiz+1;
    printf("\n");

}
bosluk=0;
yildiz=sayi;
for(i=0;i<sayi+1;i++){
    for(j=0;j<yildiz;j++){
        printf("*");
    }for(j=0;j<bosluk;j++){
        printf(" ");
    }for(j=0;j<yildiz;j++){
        printf("*");
    }
    bosluk=bosluk+2;
    yildiz=yildiz-1;
    printf("\n");

}




    return 0;
}


