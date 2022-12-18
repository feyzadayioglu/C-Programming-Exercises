#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char ulke[500];
    int i=0;
  printf("ulke isimlerini ve oranlarini giriniz:");
  fgets(ulke,500,stdin);

  printf("ulkelerin siralamasi ve oranlar:\n");
 while(ulke[i]!='\0'){

   while(ulke[i]>='A' && ulke[i]<='Z' || ulke[i]>='a' && ulke[i]<='z'){

        printf("%c",ulke[i]);
        i++;



   if(isdigit(ulke[i])){

    printf(":%c%c\n",ulke[i],ulke[i+1]);
    printf("\n");

   }

  }
  i++;

 }
return 0;
}
