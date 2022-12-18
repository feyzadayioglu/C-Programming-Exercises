#include <stdio.h>
#include <stdlib.h>

void cevirD(int *a,int *b,int *c,int *d,int N){
int i,temp;
for(i=0;i<N;i++){
    temp=*c;
    *c=*b;
    *b=*a;
    *a=*d;
    *d=temp;
}


}
void cevirT(int *a,int *b,int *c,int *d,int N){

}
int main(){
int a,b,c,d,sayi;
char secim;

printf("4 adet tamsayi giriniz: ");
scanf("%d %d %d %d",&a,&b,&c,&d);

printf("cevirme yonu: ");
scanf(" %c",&secim);


printf("girilen yonde kac kere cevrilecek:");
scanf("%d",&sayi);


printf("sayilarin cevrilmeden once halleri:%d %d %d %d\n",a,b,c,d);

 if(secim=='D'){
    cevirD(&a,&b,&c,&d,sayi);
 }
  else if(secim=='T'){
    cevirT(&a,&b,&c,&d,sayi);
  }
  printf("sayilarin cevrildikten sonra halleri:%d %d %d %d\n",a,b,c,d);

    return 0;
}
