#include <stdio.h>
#include <stdlib.h>

int main()
 {
   char cumle[100];
   int i=0;
   printf("Cumleyi giriniz:");
   gets(cumle);

   printf("%c\n",cumle[i]);

    while(cumle[i]!='/0'){
            i++;
        if(cumle[i]==' '){

        printf("%c\n",cumle[i+1]);

        }
    }

    return 0;
 }
