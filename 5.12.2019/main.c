#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int sayi){
    int i;
    int sonuc=1;
     for(i=1;i<=sayi;i++){
        sonuc=sonuc*i;
    }
    return sonuc;

}
int main(){
   int sayi;
    printf("bir sayi girin: ");
    scanf("%d",&sayi);
    printf("sayinin faktoriyeli: %d",faktoriyel(sayi));

    return 0;
}
