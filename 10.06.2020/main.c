#include <stdio.h>
#include <stdlib.h>
#define DOSYA_YOLU "quiz8.txt"


int main()
{
    char sayi[200];
    int i;

    FILE *dosya;
   if ((dosya = fopen(DOSYA_YOLU, "w")) == NULL) {
       printf("dosya acilamadi!\n");

        exit(1);
}
printf("sayiyi giriniz:");
fgets(sayi,200,stdin);

for(i=0;sayi[i]!='\0';i++){
   switch(sayi[i]){
   case '0':
            printf("sifir ");
            fprintf(dosya,"sifir ");
            break;
        case '1':
            printf("bir ");
            fprintf(dosya,"bir ");
            break;
        case '2':
            printf("iki ");
            fprintf(dosya,"iki ");
            break;
        case '3':
            printf("uc ");
            fprintf(dosya,"uc ");
            break;
        case '4':
            printf("dort ");
            fprintf(dosya,"dort ");
            break;
        case '5':
            printf("bes ");
            fprintf(dosya,"bes ");
            break;
        case '6':
            printf("alti ");
            fprintf(dosya,"alti ");
            break;
        case '7':
            printf("yedi ");
            fprintf(dosya,"yedi ");
            break;
        case '8':
            printf("sekiz ");
            fprintf(dosya,"sekiz ");
            break;
        case '9':
            printf("dokuz ");
            fprintf(dosya,"dokuz ");
            break;


   }
}
printf("\n");
printf("Dosyaya Kaydedilmistir.");

return 0;
}
