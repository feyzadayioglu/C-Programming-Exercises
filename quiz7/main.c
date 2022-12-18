#include <stdio.h>
#include <stdlib.h>

struct kisiler{
char ad[20];
int yas;

}a[100],temp;
void main()
{
    int i,j;
    struct kisiler*a;
    printf("Kisi sayisi giriniz:");
    int sayi;
    scanf("%d",&sayi);
    a=malloc(sayi*sizeof(struct kisiler));
    for(i=0;i<sayi;i++){
        printf("%d. kisiyi giriniz:",i+1);
        scanf("%s",&a[i].ad);
       printf("%d. kisinin yasini giriniz:",i+1);
        scanf("%d",&a[i].yas);

    }
    printf("\n");
    printf("ada gore fihrist siralamasi\n");
    for(i=0;i<sayi-1;i++){
        for(j=i+1;j<sayi;j++){
            if(*a[j].ad<*a[i].ad){
                   temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
        }
    }
        for(i=0;i<sayi;i++){
        printf("%s %d\n",a[i].ad,a[i].yas);
 }
 printf("\n");
    printf("yasa gore buyukten kucuge siralamasi\n");
     for(i=0;i<sayi;i++){
            for(j=0;j<sayi-1;j++){
                if(a[j].yas<a[j+1].yas){
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
    }

 for(i=0;i<sayi;i++){
          printf("%s %d\n",a[i].ad,a[i].yas);
 }
    return 0;
}
