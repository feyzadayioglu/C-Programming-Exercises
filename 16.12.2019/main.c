#include <stdio.h>
#include <stdlib.h>

int serihesapla(int a,int b){
    int i=0,j,faktoriyel=1,toplam=0;

while(i<b){

        for(j=1;j<=(a*i);j++){

    faktoriyel*=j;

        }
        printf( "%d+",faktoriyel);
        i++;
        toplam+=faktoriyel;
        faktoriyel=1;
}
printf("\n");
return toplam;
}

int main(){
    int a,b;
    printf("a: ");
    scanf("%d",&a);
    printf("b: ");
    scanf("%d",&b);
    printf("serinin terimleri: ");
    printf("toplamsonuc: %d",serihesapla(a,b));

    return 0;
}
